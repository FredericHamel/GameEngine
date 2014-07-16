#include "Game.h"
#include "GameSystem.h"
#include "FileTools.h"
#include <typeinfo>

/**
 * @brief Construtor of the game main class.
 */
Game::Game()
{
	isFixedTime = false;
	isRunning = true;
	gestionGraphics_ = new GraphicManager;
	//mouseVisible = true;
}

/**
 * @brief Sample Destructor.
 */
Game::~Game()
{
}

/**
 * @brief main game loop.
 */
void Game::Run()
{
	GameTime *gameTime = GameTime::getInstance();
	Initialize();
	LoadContent();

	float IntervalMAJ = 1000 / 60.0f;
	float TempsEcouleDepuisMAJ = 0;
	while(isRunning)
	{
		gameTime->Start();
		if(TempsEcouleDepuisMAJ > IntervalMAJ)
		{
			Draw(*gameTime);
			Update(*gameTime);
			TempsEcouleDepuisMAJ -= IntervalMAJ;
		}
		gameTime->Stop();
		TempsEcouleDepuisMAJ += gameTime->getElapsedTimeMillisecond();
	}
	UnloadContent();
}

void Game::AddComponent(GameComponent* component)
{
	components.push_back(component);
}

GraphicManager* Game::getGestionGraphics() const
{
	return this->gestionGraphics_;
}

/**
 * @brief Initialize all components.
 */
void Game::Initialize()
{
	GameSystem::Init(); // initialise le video.
	FileTools::Init();
	gestionGraphics_->Init();
	for(GameComponentList::iterator it = components.begin(); it != components.end(); ++it)
	{
		(*it)->Initialize();
	}
}

/**
 * @brief load the resource.
 */
void Game::LoadContent()
{
	for(GameComponentList::iterator it = components.begin(); it != components.end(); ++it)
	{
		(*it)->LoadContent();
	}
	gestionGraphics_->getWindow()->show();
}

/**
 * @brief Unload the resource loaded by LoadContent.
 */
void Game::UnloadContent()
{
	FileTools::Quit();
	for(GameComponentList::iterator it = components.begin(); it != components.end(); ++it)
	{
		delete *it;
	}
	components.clear();
	delete gestionGraphics_;
}

/**
 * @brief Update the logic of the game.
 */
void Game::Update(GameTime& gameTime)
{
	for(GameComponentList::iterator it = components.begin(); it != components.end(); ++it)
	{
		if((*it)->Enabled)
			(*it)->Update(gameTime);
	}
}

/**
 * @brief Draw the DrawableGameComponent on the screen.
 */
void Game::Draw(GameTime& gameTime)
{
	for(GameComponentList::iterator it = components.begin(); it != components.end(); ++it)
	{
		if(typeid(*it) == typeid(DrawableGameComponent))
		{
			DrawableGameComponent* tmp = (DrawableGameComponent*)(*it);
			if(tmp->Visible)
				tmp->Draw(gameTime);
		}
	}
	getGestionGraphics()->EndDraw();
}

/**
  * @brief Get running state of the programme.
  * return wheter or not it is running.
  */
bool Game::getRunningState() const
{
	return isRunning;
}

/**
  * @brief Get if fixed is activated.
  * @return fixed time state.
  */
bool Game::getFixedTimeState() const
{
	return isFixedTime;
}

/**
 * @brief Exit the game loop.
 */
void Game::Exit()
{
	isRunning = !isRunning;
}
