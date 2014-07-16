#ifndef GAME_COMPONENT_H
#define GAME_COMPONENT_H

#include "Common.h"

class GameComponent
{
	public:
		GameComponent(const Game&);
		virtual ~GameComponent();
		virtual void Initialize();
		virtual void LoadContent() = 0;
		virtual void UnloadContent();
		virtual void Update(const GameTime&) = 0;

		bool Enabled;
	private:
		void setGame(const Game&);
	protected:
		const Game* const getGame();
	private:
		Game* game_;
};

#endif
