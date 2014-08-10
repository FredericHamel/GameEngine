#include "DrawableGameComponent.h"
#include "Game.h"
#include "GameTime.h"

using ugen::Game;
using ugen::DrawableGameComponent;

/**
 * @brief basic construction of a DrawableGameComponent
 */
DrawableGameComponent::DrawableGameComponent(const Game& game)
	:GameComponent::GameComponent(game)
{
}

/**
 * @brief sample destruction.
 */
DrawableGameComponent::~DrawableGameComponent()
{
}

/**
 * @brief initialize a drawable game component.
 */
void DrawableGameComponent::Initialize()
{
	Visible = true;
	GameComponent::Initialize();
}
