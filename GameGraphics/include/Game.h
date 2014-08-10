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
		virtual void Run();
		virtual void Initialize();
        virtual void LoadContent();
        virtual void UnloadContent();
        virtual void Update(ugen::GameTime&);
        virtual void Draw(ugen::GameTime&);
        
        void Exit();

        bool getRunningState() const;
        bool getFixedTimeState() const;
	protected:
		void AddComponent(ugen::GameComponent*);
		ugen::GraphicManager* getGestionGraphics() const;


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
		ugen::GraphicManager* gestionGraphics_;
};

#endif // GAME_H
