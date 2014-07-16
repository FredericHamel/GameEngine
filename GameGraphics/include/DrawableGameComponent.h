#ifndef DRAWABLE_GAME_COMPONENT
#define DRAWABLE_GAME_COMPONENT

#include "Common.h"
#include "GameComponent.h"

class DrawableGameComponent : public GameComponent
{
	public:
		DrawableGameComponent(const Game&);
		virtual ~DrawableGameComponent();
		virtual void Initialize();
		virtual void Draw(const GameTime&) = 0;

		bool Visible;
};

#endif
