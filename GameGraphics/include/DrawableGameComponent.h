#ifndef DRAWABLE_GAME_COMPONENT
#define DRAWABLE_GAME_COMPONENT

#include "Common.h"
#include "GameComponent.h"

class ugen::DrawableGameComponent : public ugen::GameComponent
{
	public:
		DrawableGameComponent(const ugen::Game*);
		virtual ~DrawableGameComponent();
		virtual void draw(const ugen::GameTime&) = 0;

		inline bool isVisible() const;
		inline void setVisible(bool);
	private:
		bool visible;
};

inline
bool ugen::DrawableGameComponent::isVisible() const
{
	return this->visible;
}

inline
void ugen::DrawableGameComponent::setVisible(bool visible)
{
	this->visible = visible;
}

#endif
