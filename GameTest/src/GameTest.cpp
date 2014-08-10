#include "GameTest.h"
#include "InputManager.h"
#include "SpriteFont.h"
#include <complex>

static Rectangle rect(0,0,30,30);
static Color color(255, 0, 0, 50);

GameTest::GameTest()
{
	Debug::reset();
}

GameTest::~GameTest()
{
	int i = 0;
	Debug::log(StringConcat() << "Size: " << listPoint.size());
	for(auto it = listPoint.begin(); it != listPoint.end(); ++it)
	{
		++i;
		delete *it;
	}
	Debug::log(StringConcat() << "Delete " << i << " Objects");
}

int32_t *buffer; 
void GameTest::Initialize()
{
	Game::Initialize();
	SpriteFont::init();
	getGestionGraphics()->beginProjection();
	getGestionGraphics()->pushCurrentMatrix();
	const int MAX_ITERATION = 100;
	int i;
	std::complex<double> coord, nombreC;
	double i_x[2] = {-3.2, 3.2};
	double i_y[2] = {-2.4, 2.4};
	nombreC.real(-0.77);// -0,772691322542185 + 0,124281466072787
	nombreC.imag(0.12);
	
	buffer = new int32_t[640 * 480];

	for(int x = 0; x <= 640; ++x)
	{
		for(int y = 0; y < 480; ++y)
		{
			coord.real(x / 100.0 + i_x[0]);
			coord.imag(y / 100.0 + i_y[0]);
			coord = 1.0 / cosh(coord);
			
			i = 0;
			while(std::norm(coord) < 100 && i < MAX_ITERATION)
			{
				//coord = coord * coord + nombreC;
				coord = nombreC + coord*coord;
				++i;
			}
			buffer[480 * i + 640] = 0;
			listPoint.push_back(new ColoredPoint2D(x, y, (i * 20) % 255, (i *45) % 255, (i * 100) % 255));
		}
	}
	delete[] buffer;
}

void GameTest::LoadContent()
{
	fontLoader = SpriteFont::loadFont("/usr/share/fonts/TTF/arial.ttf", 50);
	Game::LoadContent();
}

void GameTest::UnloadContent()
{
	SpriteFont::unloadFont(fontLoader);	
	SpriteFont::quit();
	Game::UnloadContent();
}

static int scale = 1;
static bool updt_gl = false;
static int tr_hor = 0;
static int tr_ver = 0;
static int dx = 0;
static int dy = 0;
static const int VELOCITY = 10;
float tempsEcoule = 0.0f;
int cpt_loop = 0;
int fps = 0;
std::string msg = "FPS: 0";
void GameTest::Update(GameTime& gameTime)
{
	cpt_loop++;
	tempsEcoule += gameTime.getElapsedTimeMillisecond();
	
	if(tempsEcoule >= 1000.0f)
	{
	
		msg = StringConcat() << "FPS: " << fps;
		fps = 0; 
		cpt_loop=0;
		tempsEcoule-=1000.0f;
	}

	while(InputManager::PollEvent(&event))
	{
		switch(event.type)
		{
			case SDL_KEYDOWN:
				switch (event.key.keysym.sym)
				{
					case SDLK_a:
						dx = -VELOCITY;
						break;
					case SDLK_s:
						dy = VELOCITY;
						break;
					case SDLK_w:
						dy = -VELOCITY;
						break;
					case SDLK_d:
						dx = VELOCITY;
						break;
					case SDLK_LEFT:
						tr_hor--;
						updt_gl = true;
						break;
					case SDLK_RIGHT:
						tr_hor++;
						updt_gl = true;						
						break;
					case SDLK_UP:
						tr_ver--;
						updt_gl = true;
						break;
					case SDLK_DOWN:
						tr_ver++;
						updt_gl = true;
						break;
					case SDLK_r:
						scale = (scale < 10) ? scale + 1: scale;
						getGestionGraphics()->beginModelView();
						getGestionGraphics()->loadIdentity();
						getGestionGraphics()->translatef(320.0, 240.0, 0.0);
						getGestionGraphics()->scalef(scale, scale, scale);
						getGestionGraphics()->translatef(-320.0, -240.0, 0.0);
						break;
					case SDLK_t:
						scale = (scale == 1) ? scale: scale - 1;
						getGestionGraphics()->beginModelView();
						getGestionGraphics()->loadIdentity();
						getGestionGraphics()->translatef(320.0, 240.0, 0.0);
						getGestionGraphics()->scalef(scale, scale, scale);
						getGestionGraphics()->translatef(-320.0, -240.0, 0.0);
						break;
					case SDLK_ESCAPE:
						Game::Exit();
						break;
				}
				break;
			case SDL_KEYUP:
				switch(event.key.keysym.sym)
				{
					case SDLK_a:
					case SDLK_d:
						dx = 0;
						break;	
					case SDLK_s:
					case SDLK_w:			
						dy = 0;
						break;
				}
				break;
		}
	}

	if(updt_gl)
	{
		getGestionGraphics()->beginProjection();
		getGestionGraphics()->popCurrentMatrix();
		getGestionGraphics()->pushCurrentMatrix();
		getGestionGraphics()->translatef(tr_hor * 10, tr_ver * 10, 0);
		updt_gl = false;
	}
	rect.Move(dx, dy);
	Game::Update(gameTime);
}

static const Rectangle r(30,30,10,10);
void GameTest::Draw(GameTime& gameTime)
{
	++fps;
	Point2D p(50, 75);
	//Debug::log(StringConcat() << "Good!");
	getGestionGraphics()->Clear(0,0,0,1);
	//getGestionGraphics()->DrawPoint2D(listPoint);
	getGestionGraphics()->DrawString(fontLoader, msg, &p, color);
	getGestionGraphics()->DrawRect(&rect, &color);
	getGestionGraphics()->DrawRect(&r, &color);
	Game::Draw(gameTime);
}

