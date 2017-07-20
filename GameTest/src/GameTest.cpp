#include "GameTest.h"
#include "InputManager.h"
#include "SpriteFont.h"
#include "FileTools.h"
#include "Debug.h"
#include "FPS.h"

#include <complex>
#include <iostream>


//#define GL_GLEXT_PROTOTYPES
//#if defined(__WIN32__)
//#	include <Windows.h>
//# include <GL/glew.h>
//#else
//# include <GL/gl.h>
//#endif

static float vertices[] = {
	-0.5f, 0.0f, 0.0f,
	0.5f, 0.0f, 0.0f,
	0.0f, 0.5f, 0.0f
};

static unsigned int g_index[] = { 1, 2, 3 };

static GLuint vao, vbo, ibo;

GameTest::GameTest()
{
}

GameTest::~GameTest()
{
	glDeleteVertexArrays(1, &vao);
	glDeleteBuffers(1, &vbo);
	glDeleteBuffers(1, &ibo);

	if(textRenderer != nullptr) {
//		if(text != nullptr)	delete text;
//		SpriteFont::unloadFont(textRenderer);
	}

//	SpriteFont::quit();
	FileTools::Quit();
	Debug::log(StringConcat() << "GameTest::~GameTest();");
}

ugen::Rectangle dest(10,10, 0, 0);
void GameTest::initialize()
{
	size_t size;
	char *data = nullptr;

	this->addComponent(new FPS(this, 1000.0f));

	FileTools::Init();
//	SpriteFont::init();
	FileTools::AddSearchPath("..");
	FileTools::AddSearchPath("/usr/share/fonts/TTF");
	FileTools::LoadFileBuffer("README.md", &size, &data);
	std::cout.write(data, size) << std::endl;
	FileTools::UnloadFileBuffer(&data);

	/*textRenderer = SpriteFont::loadFont("DejaVuSans.ttf", 40);

	if(textRenderer == nullptr)
        Debug::error(StringConcat() << "Unable to create text renderer");
	else
	{
		Color color(0, 128, 0);
		text = textRenderer->renderText("Hello World!", color);
		if(text != nullptr) {
			dest.setWidth(text->getWidth());
			dest.setHeight(text->getHeight());
		}
	}*/
	//getGestionGraphics().beginProjection();
	//getGestionGraphics().pushCurrentMatrix();
	Game::initialize();
}

void GameTest::loadContent()
{
	glGenVertexArrays(1, &vao);
	glBindVertexArray(vao);
	glGenBuffers(1, &vbo );
	glBindBuffer(GL_ARRAY_BUFFER, vbo);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
	glEnableVertexAttribArray(0);
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, 0);

	// IBO
	glGenBuffers(1, &ibo );
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ibo);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(g_index), g_index, GL_STATIC_DRAW);
	Game::loadContent();
}

void GameTest::update(GameTime& gameTime)
{
	if(InputManager::PollEvent(&event))
	{
		switch(event.type)
		{
			case SDL_KEYDOWN:
				switch (event.key.keysym.sym)
				{
					case SDLK_q:
						getGestionGraphics().toggleSwapInterval();
						break;
					case SDLK_ESCAPE:
						Game::exit();
						break;
				}
				break;
		}
	}
	Game::update(gameTime);
}

void GameTest::draw(GameTime& gameTime)
{
	getGestionGraphics().clear(0.0f,0.0f,0.4f,0.0f);
	//getGestionGraphics().draw(text, 10, 10);
	//glDrawElements(GL_TRIANGLES, 3, GL_UNSIGNED_INT, nullptr);
	Game::draw(gameTime);
}

