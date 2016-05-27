#ifndef COMMON_H
#define COMMON_H


// Type
#include <cstdint>

// SDL methods
#include <SDL2/SDL.h>

// String Methods
#include <cstring>
#include <string>

#include <list>
#include <map>
#include <vector>

#include "Debug.h"

#pragma GCC visibility push(default)
namespace ugen
{
	class FileTools;
	class ImageTools;

	class Game;
	class GameTime;
	class GameWindow;
	class GameComponent;
	class DrawableGameComponent;

	class Sprite;
	class SpriteFont;
	class SpriteAnimation;

	class GameSystem;
	class GraphicManager;
	class InputManager;

	class Color;
	class Point2D;
	class ColoredPoint2D;
	class Rectangle;

	// Interface
	class Serializable;

	typedef SDL_Event GameEvent;
	typedef std::vector<GameComponent*> GameComponentList;
}
#pragma GCC visibility pop

#endif

