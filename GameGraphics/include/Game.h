#ifndef GAME_H
#define GAME_H

#include "Common.h"
#include "GameWindow.h"
#include "DrawableGameComponent.h"
#include "GameTime.h"
#include "GraphicManager.h"

class ugen::Game
{
	public:
		Game();
		virtual ~Game();
		virtual void run();
		virtual void initialize();
		virtual void loadContent();
		virtual void update(ugen::GameTime&);
		virtual void draw(ugen::GameTime&);

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

#endif // GAME_H
