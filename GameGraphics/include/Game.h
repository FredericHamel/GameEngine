#ifndef GAME_H
#define GAME_H

#include "Common.h"
#include "GameWindow.h"
#include "DrawableGameComponent.h"
#include "GameTime.h"
#include "GraphicManager.h"

namespace ugen
{
	class Game
	{
		public:
			Game() throw(VideoException);
			Game(const char*, int32_t, int32_t) throw(VideoException);
			Game(const char*, int32_t, int32_t, int32_t, int32_t) throw(VideoException);
			virtual ~Game();
			virtual void run() throw (std::exception);
			virtual void initialize() throw (std::exception);
			virtual void loadContent() throw (std::exception);
			virtual void update(ugen::GameTime&) throw (std::exception);
			virtual void draw(ugen::GameTime&) throw (std::exception);

			void exit();

			bool getRunningState() const;
			bool getFixedTimeState() const;
		protected:
			void addComponent(ugen::GameComponent*);

			ugen::GraphicManager& getGestionGraphics();


			// To implements
			/*
				 void setMouseVisibleState(bool);
				 void setFixedTimeState(bool);

				 void toggleMouseVisible();
				 void toggleFixedTimeState();
				 */
		private:
			bool mouseVisible_;
			bool isRunning;
			bool isFixedTime;

			ugen::GameComponentList components;
			ugen::GraphicManager gestionGraphics_;
	};
}

#endif // GAME_H
