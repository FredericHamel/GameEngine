#include "GraphicManager.h"
#include <GL/gl.h>

const std::string DEFAULT_TITLE = "Game Engine";
const int32_t DEFAULT_WIDTH = 640;
const int32_t DEFAULT_HEIGHT = 480;

/**
 * @brief create the Graphic manager with a inner window.
 */
GraphicManager::GraphicManager()
{
	window_ = new GameWindow(DEFAULT_TITLE, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, DEFAULT_WIDTH, DEFAULT_HEIGHT, SDL_WINDOW_OPENGL | SDL_WINDOW_HIDDEN);
}

/**
 * @brief
 */
GraphicManager::GraphicManager(std::string title, int32_t x, int32_t y, int32_t w, int32_t h)
{
	window_ = new GameWindow(title.c_str(), x, y, w, h, SDL_WINDOW_OPENGL | SDL_WINDOW_HIDDEN);
}

/**
 * @brief
 */
GraphicManager::~GraphicManager()
{
	delete window_;
}

void GraphicManager::Init()
{
	int32_t w, h;
	getWindow()->getWindowSize(w, h);
	glShadeModel(GL_SMOOTH);
	
	glDisable(GL_DEPTH_TEST);

	glEnable(GL_TEXTURE_2D);
	
	beginProjection();
	loadIdentity();
	setOrthoSystem(0, w, h, 0.0, 0.0, 1.0);
	setViewport(0, 0, w, h);

	beginModelView();
	loadIdentity();

	glClearColor(0.0,0.0,0.0,1.0);
}

void GraphicManager::beginProjection()
{
	glMatrixMode(GL_PROJECTION);
}

void GraphicManager::beginModelView()
{
	glMatrixMode(GL_MODELVIEW);
}

void GraphicManager::beginTexture()
{
	glMatrixMode(GL_TEXTURE);
}

void GraphicManager::loadIdentity()
{
	glLoadIdentity();
}

void GraphicManager::pushCurrentMatrix()
{
	glPushMatrix();
}

void GraphicManager::popCurrentMatrix()
{
	glPopMatrix();
}


void GraphicManager::setViewport(int32_t x, int32_t y, uint32_t w, uint32_t h)
{
	glViewport(0, 0, w, h);
}

void GraphicManager::setOrthoSystem(double left, double right, double bottom, double top, double near, double far)
{
	glOrtho(left, right, bottom, top, near, far);
}

void GraphicManager::setFrustum(double left, double right, double bottom, double top, double near, double far)
{
	glFrustum(left, right, bottom, top, near, far);
}

void GraphicManager::translatef(float x, float y, float z)
{
	glTranslatef(x, y, z);
}

void GraphicManager::translated(double x, double y, double z)
{
	glTranslated(x, y, z);
}

void GraphicManager::rotatef(float angle, float x, float y, float z)
{
	glRotatef(angle, x, y, z);
}

void GraphicManager::rotated(double angle, double x, double y, double z)
{
	glRotated(angle, x, y, z);
}

void GraphicManager::scalef(float x, float y, float z)
{
	glScalef(x, y, z);
}

void GraphicManager::scaled(double x, double y, double z)
{
	glScaled(x, y, z);
}

/**
 * @brief
 */
GameWindow* GraphicManager::getWindow() const
{
	return window_;
}

void GraphicManager::toggleFullscreen()
{
	getWindow()->toggleFullscreen();
}

/**
 * @brief 
 */
void GraphicManager::Clear(float r, float g, float b, float a)
{
	glClearColor(r, g, b, a);
	glClear(GL_COLOR_BUFFER_BIT);
}

void GraphicManager::Draw(Sprite* sprite, const Rectangle* src, const Rectangle* dst) const
{
	if(src == 0)
	{
		glBindTexture(GL_TEXTURE_2D, sprite->getBuffer());
		glBegin(GL_QUADS);
			glTexCoord2f(0, 0);		glVertex3f(dst->getX(), dst->getY(), 0);
			glTexCoord2f(1, 0);		glVertex3f(dst->getX() + dst->getWidth(), dst->getY(), 0);
			glTexCoord2f(1, 1);		glVertex3f(dst->getX() + dst->getWidth(), dst->getY() + dst->getHeight(), 0);
			glTexCoord2f(0, 1);		glVertex3f(dst->getX(), dst->getY() + dst->getHeight(), 0);
		glEnd();
	}
	else
	{
		if(src->getX() + src->getWidth() > sprite->getWidth() ||
			src->getY() + src->getHeight() > sprite->getHeight())
		{
			Debug::warning(StringConcat() << "Rectangle src is outside the image rectangle...");
		}
		else
		{
			glBindTexture(GL_TEXTURE_2D, sprite->getBuffer());
			Point2D p[2];
			p[0].Offset(src->getX() / sprite->getWidth(), src->getY() / sprite->getHeight());
			p[1].Offset((src->getX() + src->getWidth()) / sprite->getWidth(), (src->getY() + src->getHeight()) / sprite->getHeight());
			glBegin(GL_QUADS);
				glTexCoord2f(p[0].getX(), p[0].getY()); glVertex3f(dst->getX(), dst->getY(), 0);
				glTexCoord2f(p[1].getX(), p[0].getY()); glVertex3f(dst->getX() + dst->getWidth(), dst->getY(), 0);
				glTexCoord2f(p[1].getX(), p[1].getY()); glVertex3f(dst->getX() + dst->getWidth(), dst->getY() + dst->getHeight(), 0);
				glTexCoord2f(p[0].getX(), p[1].getY()); glVertex3f(dst->getX(), dst->getY() + dst->getHeight(), 0);
			glEnd();
		}
	}
}

#include <typeinfo>
void GraphicManager::DrawPoint2D(std::vector<ColoredPoint2D*> list)
{
	glBegin(GL_POINTS);
		for(auto it = list.begin(); it != list.end(); ++it)
		{
			glColor3f((*it)->getRed() / 255.0f, (*it)->getGreen() / 255.0f, (*it)->getBlue() / 255.0f); glVertex3f((*it)->getX(), (*it)->getY(), 0);
		}
	glEnd();
}

void GraphicManager::DrawRect(const Rectangle& rect, const Color& color)
{
	glBegin(GL_QUADS);
		glColor3f(color.getRed(), color.getGreen(), color.getBlue());
		glVertex3i(rect.getX(), rect.getY(), 0);
		glVertex3i(rect.getX(), rect.getY() + rect.getHeight(), 0);
		glVertex3i(rect.getX() + rect.getWidth(), rect.getY() + rect.getHeight(), 0);
		glVertex3i(rect.getX() + rect.getWidth(), rect.getY(), 0);
	glEnd();
}

void GraphicManager::EndDraw()
{
	getWindow()->UpdateDraw();
}
