#include "GameTest.h"
#include "InputManager.h"
#include "SpriteFont.h"
#include <complex>


GameTest::GameTest()
{
	Debug::reset();
}

GameTest::~GameTest()
{
}

void GameTest::Initialize()
{
	Game::Initialize();
	getGestionGraphics()->beginProjection();
	getGestionGraphics()->pushCurrentMatrix();
}

void GameTest::LoadContent()
{
	Game::LoadContent();
}

void GameTest::UnloadContent()
{
	Game::UnloadContent();
}

int fps = 0;
float tempsEcoule = 0.0f;
void GameTest::Update(GameTime& gameTime)
{
	if(tempsEcoule >= 1000.0f)
	{
		tempsEcoule-=1000.0f;
	}

	while(InputManager::PollEvent(&event))
	{
		switch(event.type)
		{
			case SDL_KEYDOWN:
				switch (event.key.keysym.sym)
				{
					case SDLK_ESCAPE:
						Game::Exit();
						break;
				}
				break;
		}
	}
	Game::Update(gameTime);
}

void GameTest::Draw(GameTime& gameTime)
{
	++fps;
	Game::Draw(gameTime);
}

