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

class FileTools;
class ImageTools;

class Game;
class GameTime;
class GameWindow;
class GameComponent;
class DrawableGameComponent;

class Sprite;
class SpriteAnimation;

class GameSystem;
class GraphicManager;
class InputManager;

typedef SDL_Event GameEvent;
typedef std::vector<GameComponent*> GameComponentList;

#endif
