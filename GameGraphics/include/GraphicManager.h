#ifndef GRAPHIC_MANAGER_H
#define GRAPHIC_MANAGER_H

#include "Common.h"
#include "Sprite.h"
#include "ColoredPoint2D.h"
#include "GameWindow.h"

// Gestion 2d
class GraphicManager
{
public:
	GraphicManager();
	GraphicManager(std::string, int32_t, int32_t, int32_t, int32_t);
	~GraphicManager();
	
	void Init();
	void toggleFullscreen();

	
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
	void Draw(Sprite*, const Rectangle*, const Rectangle*) const;
	void DrawPoint2D(std::vector<ColoredPoint2D*>);
	void DrawRect(const Rectangle&, const Color&);
	void EndDraw();
private:
	GameWindow* getWindow() const;
#ifndef GAME_H
	GameWindow* window_;
#endif
friend class Game;
};

#endif