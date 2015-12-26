#ifndef GRAPHIC_MANAGER_H
#define GRAPHIC_MANAGER_H

#include "Common.h"
#include "Sprite.h"
#include "ColoredPoint2D.h"
#include "GameWindow.h"
#include "subsystem/Video.h"

// Gestion 2d
class ugen::GraphicManager : public ugen::Video, public ugen::GameWindow
{
public:
	GraphicManager() throw (VideoException);
	GraphicManager(std::string, int32_t, int32_t, int32_t, int32_t) throw (VideoException);
	~GraphicManager();
	
	void init();

	// Set Matrix mode
	void beginProjection() const;
	void beginModelView() const;
	void beginTexture() const;

	// OpenGL setting
	void loadIdentity() const;
	void pushCurrentMatrix() const;
	void popCurrentMatrix() const;
	void setViewport(int32_t, int32_t, uint32_t, uint32_t) const;
	void setOrthoSystem(double, double, double, double, double, double) const;
	void setFrustum(double, double, double, double, double, double) const;

	// OpenGL transformation 3D
	void translatef(float, float, float) const;
	void translated(double, double, double) const;
	void rotatef(float, float, float, float) const;
	void rotated(double, double, double, double) const;
	void scalef(float, float, float) const;
	void scaled(double, double, double) const;

	// Color RGB
	void clear(float, float, float, float) const;
	void draw(const ugen::Sprite* const, int32_t, int32_t) const;
	void draw(const ugen::Sprite* const, const ugen::Rectangle* const, const ugen::Rectangle* const) const;
	void drawString(const ugen::SpriteFont* const, std::string, const ugen::Point2D* const, Color) const;
	void drawPoint2D(std::vector<ColoredPoint2D*>) const;
	void drawRect(const ugen::Rectangle* const, const ugen::Color* const) const;
};

#endif
