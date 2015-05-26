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
	
	void Init();
	void toggleFullscreen();
	void toggleSwapInterval();
	void getWindowSize(int32_t* w, int32_t* h);

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
	void Clear(float, float, float, float);
	void Draw(const ugen::Sprite* const, const ugen::Rectangle* const, const ugen::Rectangle* const) const;
	void DrawString(const ugen::SpriteFont* const, std::string, const ugen::Point2D* const, Color);
	void DrawPoint2D(std::vector<ColoredPoint2D*>) const;
	void DrawRect(const ugen::Rectangle* const, const ugen::Color* const) const;
	void EndDraw();
private:
	ugen::GameWindow* getWindow() const;
#ifndef GAME_H
	ugen::GameWindow* window_;
#endif
friend class ugen::Game;
};

#endif
