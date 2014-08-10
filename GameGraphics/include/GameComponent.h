#ifndef GAME_COMPONENT_H
#define GAME_COMPONENT_H

#include "Common.h"

class ugen::GameComponent
{
	public:
		GameComponent(const ugen::Game&);
		virtual ~GameComponent();
		virtual void Initialize();
		virtual void LoadContent() = 0;
		virtual void UnloadContent();
		virtual void Update(const ugen::GameTime&) = 0;

		bool Enabled;
	private:
		void setGame(const ugen::Game&);
	protected:
		const ugen::Game* const getGame();
	private:
		Game* game_;
};

#endif
