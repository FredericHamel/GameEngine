#ifndef GAME_H
#define GAME_H

#include "Common.h"
#include "GameWindow.h"
#include "DrawableGameComponent.h"
#include "GameTime.h"
#include "GraphicManager.h"

class Game
{
    public:
        Game();
        virtual ~Game();
		virtual void Run();
		virtual void Initialize();
        virtual void LoadContent();
        virtual void UnloadContent();
        virtual void Update(GameTime&);
        virtual void Draw(GameTime&);
        
        void Exit();

        bool getRunningState() const;
        bool getFixedTimeState() const;
	protected:
		void AddComponent(GameComponent*);
		GraphicManager* getGestionGraphics() const;


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

		GameComponentList components;
		GraphicManager* gestionGraphics_;
};

#endif // GAME_H
