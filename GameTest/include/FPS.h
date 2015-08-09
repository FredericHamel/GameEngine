#ifndef FPS_H
#define FPS_H

#include "GameTime.h"
#include "DrawableGameComponent.h"

class FPS : public ugen::DrawableGameComponent
{
	public:
		FPS(const ugen::Game*, float);
		virtual ~FPS();

		virtual void initialize();
		virtual void loadContent();
	 	virtual void update(const ugen::GameTime& gameTime);
		virtual void draw(const ugen::GameTime& gameTime);
		virtual void unloadContent();
	private:
		float _tempsEcouleDepuisMAJ;
		float _intervalMAJ;
		uint32_t _fps;	
};

#endif //FPS_H
