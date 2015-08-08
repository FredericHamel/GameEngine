#include "GameComponent.h"
#include "Game.h"
#include "GameTime.h"

using ugen::Game;
using ugen::GameComponent;
using ugen::GameTime;

/**
 * @brief construct the class.
 * @param game is a pointer to the main class Game.
 */
GameComponent::GameComponent(const Game* game)
{
	this->setGame(game);
}

/**
 * @brief basic destruction of the component.
 */
GameComponent::~GameComponent()
{
}

/**
  * @brief get value of the game_ pointer.
  * @return game_
  */
const Game* GameComponent::getGame() const
{
	return game_;
}

/**
 * @brief set value of the game_ pointer.
 * @param game is a pointer to the main class.
 */
void GameComponent::setGame(const Game* game)
{
	game_ = game;
}

/**
 * @brief basic initialization of a component.
 */
void GameComponent::initialize()
{
}

/**
 * @brief Unload the logics.
 */
void GameComponent::unloadContent()
{
}

