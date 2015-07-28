#include "GameTest.h"
#include "InputManager.h"
#include "SpriteFont.h"
#include "FileTools.h"
#include <complex>
#include <iostream>

#define GL_GLEXT_PROTOTYPES
#include <GL/gl.h>

static float vertices[] = {
	-0.5f, 0.0f, 0.0f,
	0.5f, 0.0f, 0.0f,
	0.0f, 0.5f, 0.0f
};

unsigned int g_index[] = { 1, 2, 3 };

static GLuint vao, vbo, ibo;

GameTest::GameTest()
{
	Debug::reset();
}

GameTest::~GameTest()
{
	
}

void GameTest::initialize()
{
	size_t size;
	char *data;
	Game::initialize();
	FileTools::Init();
	FileTools::AddSearchPath(".");
	FileTools::LoadFileBuffer("README.md", &size, &data);
	std::cout.write(data, size) << std::endl;

	FileTools::UnloadFileBuffer(&data);
	getGestionGraphics()->beginProjection();
	getGestionGraphics()->pushCurrentMatrix();
}

void GameTest::loadContent()
{
	glGenVertexArrays(1, &vao);
	glBindVertexArray(vao);
	glGenBuffers(1, &vbo );
	glBindBuffer(GL_ARRAY_BUFFER, vbo);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices) * sizeof(float), vertices, GL_STATIC_DRAW);
	glEnableVertexAttribArray(0);
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, 0);
	
	// IBO
	glGenBuffers(1, &ibo );
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ibo);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(g_index)/sizeof(unsigned int), g_index, GL_STATIC_DRAW);
	Game::loadContent();
}

void GameTest::unloadContent()
{
	FileTools::Quit();
	Game::unloadContent();
}

int fps = 0;
float tempsEcoule = 0.0f;
void GameTest::update(GameTime& gameTime)
{
	tempsEcoule += (float)gameTime.getElapsedTimeMillisecond();
	if(tempsEcoule >= 1000.0f)
	{
		std::cout << "FPS: " << fps << std::endl;
		tempsEcoule-=1000.0f;
		fps = 0;
	}

	while(InputManager::PollEvent(&event))
	{
		switch(event.type)
		{
			case SDL_KEYDOWN:
				switch (event.key.keysym.sym)
				{
					case SDLK_q:
						getGestionGraphics()->toggleSwapInterval();
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
	++fps;
	glDrawElements(GL_TRIANGLES, 3, GL_UNSIGNED_INT, nullptr);
	Game::draw(gameTime);
}

