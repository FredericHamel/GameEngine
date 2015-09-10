#include "GraphicManager.h"
#include "SpriteFont.h"
#include <GL/gl.h>

using ugen::Point2D;
using ugen::Rectangle;
using ugen::GameWindow;
using ugen::GraphicManager;
using ugen::Video;

namespace ugen
{
	static const std::string DEFAULT_TITLE = "Game Engine";
	static const int32_t DEFAULT_WIDTH = 640;
	static const int32_t DEFAULT_HEIGHT = 480;

	/**
	 * @brief create the Graphic manager with a inner window.
	 */
	GraphicManager::GraphicManager() throw (VideoException)
		:Video(), GameWindow(DEFAULT_TITLE, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, DEFAULT_WIDTH, DEFAULT_HEIGHT, SDL_WINDOW_OPENGL | SDL_WINDOW_HIDDEN)
	{
		Debug::log(StringConcat() << "Create GraphicManager: window.title = " << DEFAULT_TITLE);
	}

	/**
	 * @brief
	 */
	GraphicManager::GraphicManager(std::string title, int32_t x, int32_t y, int32_t w, int32_t h) throw (VideoException)
		:Video(), GameWindow(title.c_str(), x, y, w, h, SDL_WINDOW_OPENGL | SDL_WINDOW_HIDDEN)
	{
		Debug::log(StringConcat() << "Create GraphicManager: window.title = " << title);
	}

	/**
	 * @brief
	 */
	GraphicManager::~GraphicManager()
	{
		Debug::log(StringConcat() << "Destroy GraphicManager: window.title = " << getWindowTitle());
	}

	void
		GraphicManager::init()
		{
			int32_t w, h;
			getWindowSize(w, h);
			glShadeModel(GL_SMOOTH);

			glDisable(GL_DEPTH_TEST);

			glEnable(GL_TEXTURE_2D);
			glEnable(GL_BLEND);
			glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

			beginProjection();
			loadIdentity();
			setOrthoSystem(0, w, h, 0.0, 0.0, 1.0);
			setViewport(0, 0, w, h);

			beginModelView();
			loadIdentity();

			glClearColor(0.0,0.0,0.0,1.0);
		}

	void
		GraphicManager::beginProjection() const
		{
			glMatrixMode(GL_PROJECTION);
		}

	void
		GraphicManager::beginModelView() const
		{
			glMatrixMode(GL_MODELVIEW);
		}

	void
		GraphicManager::beginTexture() const
		{
			glMatrixMode(GL_TEXTURE);
		}

	void
		GraphicManager::loadIdentity() const
		{
			glLoadIdentity();
		}

	void
		GraphicManager::pushCurrentMatrix() const
		{
			glPushMatrix();
		}

	void
		GraphicManager::popCurrentMatrix() const
		{
			glPopMatrix();
		}


	void
		GraphicManager::setViewport(int32_t x, int32_t y, uint32_t w, uint32_t h) const
		{
			glViewport(0, 0, w, h);
		}

	void
		GraphicManager::setOrthoSystem(double left, double right, double bottom, double top, double near, double far) const
		{
			glOrtho(left, right, bottom, top, near, far);
		}

	void
		GraphicManager::setFrustum(double left, double right, double bottom, double top, double near, double far) const
		{
			glFrustum(left, right, bottom, top, near, far);
		}

	void
		GraphicManager::translatef(float x, float y, float z) const
		{
			glTranslatef(x, y, z);
		}

	void
		GraphicManager::translated(double x, double y, double z) const
		{
			glTranslated(x, y, z);
		}

	void
		GraphicManager::rotatef(float angle, float x, float y, float z) const
		{
			glRotatef(angle, x, y, z);
		}

	void
		GraphicManager::rotated(double angle, double x, double y, double z) const
		{
			glRotated(angle, x, y, z);
		}

	void
		GraphicManager::scalef(float x, float y, float z) const
		{
			glScalef(x, y, z);
		}

	void
		GraphicManager::scaled(double x, double y, double z) const
		{
			glScaled(x, y, z);
		}

	/**
	 * @brief 
	 */
	void
		GraphicManager::clear(float r, float g, float b, float a) const
		{
			glClearColor(r, g, b, a);
			glClear(GL_COLOR_BUFFER_BIT);
		}

	void
		GraphicManager::draw(const Sprite* const sprite, int32_t x, int32_t y) const
		{
			glBindTexture(GL_TEXTURE_2D, sprite->getBuffer());
			glBegin(GL_QUADS);
			glTexCoord2f(0, 0);	glVertex3f(x, y, 0);
			glTexCoord2f(1, 0);	glVertex3f(x + sprite->getWidth(), y, 0);
			glTexCoord2f(1, 1);	glVertex3f(x + sprite->getWidth(), y + sprite->getHeight(), 0);
			glTexCoord2f(0, 1);	glVertex3f(x, y + sprite->getHeight(), 0);
			glEnd();	
		}

	void
		GraphicManager::draw(const Sprite* const sprite, const Rectangle* const src, const Rectangle* const dst) const
		{
			if(src == 0)
			{
				glBindTexture(GL_TEXTURE_2D, sprite->getBuffer());
				glBegin(GL_QUADS);
				glTexCoord2f(0, 0);	glVertex3f(dst->getX(), dst->getY(), 0);
				glTexCoord2f(1, 0);	glVertex3f(dst->getX() + dst->getWidth(), dst->getY(), 0);
				glTexCoord2f(1, 1);	glVertex3f(dst->getX() + dst->getWidth(), dst->getY() + dst->getHeight(), 0);
				glTexCoord2f(0, 1);	glVertex3f(dst->getX(), dst->getY() + dst->getHeight(), 0);
				glEnd();
			}
			else
			{
				if(dst == NULL)
					Debug::warning(StringConcat() << "-- Null destination.");
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
		}

	void
		GraphicManager::drawString(const SpriteFont *const font, std::string text, const Point2D* const p, Color fg) const
		{
			Sprite* sprite = font->renderText(text, fg);
			if(sprite != NULL)
			{
				Rectangle rect(*p, sprite->getWidth(), sprite->getHeight());
				draw(sprite, NULL, &rect);
				delete sprite;
			}
		}

	void
		GraphicManager::drawPoint2D(std::vector<ColoredPoint2D*> list) const
		{
			glBegin(GL_POINTS);
			for(auto it = list.begin(); it != list.end(); ++it)
			{
				glColor3ub((*it)->getRed(), (*it)->getGreen(), (*it)->getBlue()); glVertex2f((*it)->getX(), (*it)->getY());
			}
			glEnd();
		}

	void
		GraphicManager::drawRect(const Rectangle* const rect, const Color* const color) const
		{
			glBegin(GL_QUADS);
			glColor3f(color->getRed() / 255.0f, color->getGreen() / 255.0f, color->getBlue() / 255.0f);
			glVertex3i(rect->getX(), rect->getY(), 0);
			glVertex3i(rect->getX() + rect->getWidth(), rect->getY(), 0);
			glVertex3i(rect->getX() + rect->getWidth(), rect->getY() + rect->getHeight(), 0);
			glVertex3i(rect->getX(), rect->getY() + rect->getHeight(), 0);
			glEnd();
		}
}
