#ifndef GRAPHIC_MANAGER_H
#define GRAPHIC_MANAGER_H

#include "Common.h"
#include "Sprite.h"
#include "ColoredPoint2D.h"
#include "GameWindow.h"

// Gestion 2d
class ugen::GraphicManager
{
public:
	GraphicManager();
	GraphicManager(std::string, int32_t, int32_t, int32_t, int32_t);
	~GraphicManager();
	
	void init();
	void toggleFullscreen();
	void toggleSwapInterval();
	void getWindowSize(int32_t* w, int32_t* h) const;

	// Set Matrix mode
	void beginProjection();
	void beginModelView();
	void beginTexture();

	// OpenGL setting
	void loadIdentity();
	void pushCurrentMatrix();
	void popCurrentMatrix();
	void setViewport(int32_t, int32_t, uint32_t, uint32_t);
	void setOrthoSystem(double, double, double, double, double, double);
	void setFrustum(double, double, double, double, double, double);

	// OpenGL transformation 3D
	void translatef(float, float, float);
	void translated(double, double, double);
	void rotatef(float, float, float, float);
	void rotated(double, double, double, double);
	void scalef(float, float, float);
	void scaled(double, double, double);

	// Color RGB
	void clear(float, float, float, float);
	void draw(const ugen::Sprite* const, const ugen::Rectangle* const, const ugen::Rectangle* const) const;
	void drawString(const ugen::SpriteFont* const, std::string, const ugen::Point2D* const, Color);
	void drawPoint2D(std::vector<ColoredPoint2D*>) const;
	void drawRect(const ugen::Rectangle* const, const ugen::Color* const) const;
	void endDraw();
private:
	const ugen::GameWindow& getWindow() const;
#ifndef GAME_H
	ugen::GameWindow window_;
#endif
friend class ugen::Game;
};

#endif
