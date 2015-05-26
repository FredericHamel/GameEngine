#include "GameTest.h"
#include "InputManager.h"
#include "SpriteFont.h"
#include "FileTools.h"
#include <complex>
#include <iostream>

GameTest::GameTest()
{
	Debug::reset();
}

GameTest::~GameTest()
{
}

void GameTest::Initialize()
{
	size_t size;
	char *data;
	Game::Initialize();
	FileTools::Init();
	FileTools::AddSearchPath(".");
	FileTools::LoadFileBuffer("README.md", &size, &data);
	std::cout.write(data, size) << std::endl;

	FileTools::UnloadFileBuffer(&data);
	getGestionGraphics()->beginProjection();
	getGestionGraphics()->pushCurrentMatrix();
}

void GameTest::LoadContent()
{
	Game::LoadContent();
}

void GameTest::UnloadContent()
{
	FileTools::Quit();
	Game::UnloadContent();
}

int fps = 0;
float tempsEcoule = 0.0f;
void GameTest::Update(GameTime& gameTime)
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

