#include "Game.h"
#include "FileTools.h"
#include "Debug.h"
#include <typeinfo>

using ugen::Game;
using ugen::GameTime;
using ugen::GraphicManager;

/**
 * @brief Construtor of the game main class.
 */
Game::Game()
	:gestionGraphics_()
{
	Debug::log(StringConcat() << "Create Game");
	isFixedTime = false;
	isRunning = true;
	//mouseVisible = true;
}


/**
 * @brief Sample Destructor unload content. 
 */
Game::~Game()
{
	Debug::log(StringConcat() << "Destroy Game");
	for(GameComponentList::iterator it = components.begin(); it != components.end(); ++it)
	{
		delete *it;
	}
	components.clear();
}

/**
 * @brief main game loop.
 */
void 
Game::run()
{
	GameTime *gameTime = GameTime::getInstance();
	try {
		initialize();
		loadContent();
	
		gameTime->init();
	
		while(isRunning)
		{
			draw(*gameTime);
			update(*gameTime);
			gameTime->update();
		}
	} catch(ugen::RuntimeException& e) {
		Debug::error(StringConcat() << e.getExceptionName() << ": " << e.what());
	} /** Should catch std::exception */
}

void 
Game::addComponent(GameComponent* component)
{
	components.push_back(component);
}

GraphicManager&
Game::getGestionGraphics()
{
	return this->gestionGraphics_;
}

/**
 * @brief Initialize all components.
 */
void
Game::initialize()
{
//	GameSystem::init(); // initialise le video.
	gestionGraphics_.init();
	for(GameComponentList::iterator it = components.begin(); it != components.end(); ++it)
	{
		(*it)->initialize();
	}
}

/**
 * @brief load the resource.
 */
void
Game::loadContent()
{
	for(GameComponentList::iterator it = components.begin(); it != components.end(); ++it)
	{
		(*it)->loadContent();
	}
	gestionGraphics_.show();
}

/**
 * @brief Update the logic of the game.
 */
void
Game::update(GameTime& gameTime)
{
	for(GameComponentList::iterator it = components.begin(); it != components.end(); ++it)
	{
		if((*it)->isEnabled());
			(*it)->update(gameTime);
	}
}

/**
 * @brief Draw the DrawableGameComponent on the screen.
 */
void
Game::draw(GameTime& gameTime)
{
	for(GameComponentList::iterator it = components.begin(); it != components.end(); ++it)
	{
		DrawableGameComponent* tmp = dynamic_cast<DrawableGameComponent*>(*it);
		if(tmp != nullptr && tmp->isVisible())
				tmp->draw(gameTime);
	}
	gestionGraphics_.updateDraw();
}

/**
  * @brief Get running state of the programme.
  * return wheter or not it is running.
  */
bool
Game::getRunningState() const
{
	return isRunning;
}

/**
  * @brief Get if fixed is activated.
  * @return fixed time state.
  */
bool
Game::getFixedTimeState() const
{
	return isFixedTime;
}

/**
 * @brief Exit the game loop.
 */
void
Game::exit()
{
	isRunning = !isRunning;
}
