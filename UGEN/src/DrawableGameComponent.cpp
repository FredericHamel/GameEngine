#include "DrawableGameComponent.h"
#include "Game.h"
#include "GameTime.h"

using ugen::Game;
using ugen::DrawableGameComponent;

/**
 * @brief basic construction of a DrawableGameComponent
 */
DrawableGameComponent::DrawableGameComponent(const Game* game)
	:GameComponent::GameComponent(game)
{
	this->setVisible(true);
}

/**
 * @brief sample destruction.
 */
DrawableGameComponent::~DrawableGameComponent()
{
}



