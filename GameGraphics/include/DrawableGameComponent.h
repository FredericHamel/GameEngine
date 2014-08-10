#ifndef DRAWABLE_GAME_COMPONENT
#define DRAWABLE_GAME_COMPONENT

#include "Common.h"
#include "GameComponent.h"

class ugen::DrawableGameComponent : public ugen::GameComponent
{
	public:
		DrawableGameComponent(const ugen::Game&);
		virtual ~DrawableGameComponent();
		virtual void Initialize();
		virtual void Draw(const ugen::GameTime&) = 0;

		bool Visible;
};

#endif
