#ifndef GAME_COMPONENT_H
#define GAME_COMPONENT_H

#include "Common.h"

class ugen::GameComponent
{
	public:
		GameComponent(const ugen::Game&);
		virtual ~GameComponent();
		virtual void initialize();
		virtual void loadContent() = 0;
		virtual void unloadContent();
		virtual void update(const ugen::GameTime&) = 0;

		inline void setEnable(bool);
		inline bool isEnabled() const;
	private:
		void setGame(const ugen::Game&);
	protected:
		const ugen::Game* const getGame();
	private:
		bool enable;
		Game* game_;
};

inline
void ugen::GameComponent::setEnable(bool enable)
{
	this->enable = enable;
}

inline
bool ugen::GameComponent::isEnabled() const
{
	return this->enable;
}
#endif
