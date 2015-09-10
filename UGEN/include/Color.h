#ifndef COLOR_H
#define COLOR_H

#include "Common.h"

class ugen::Color
{
public:
	/**
	 * Palette crée de ce site:
	 * http://www.rapidtables.com/web/color/RGB_Color.htm
	 */
	enum Palette
	{
		BLACK,
		BLUE = 0x0000FF,
		BLUE_VIOLET = 0x8A2BE2,
		BROWN = 0xA52A2A,
		CADET_BLUE = 0x5F9EA0,
		CHART_REUSE = 0x7FFF00,
		CYAN = 0x000FFFF,
		CYAN_MARIN = 0x7FFFD4,
		CORAL = 0xFF7F50,
		CORN_FLOWER_BLUE = 0x6495ED,
		CRIMSON = 0xDC143C,
		DARK_BLUE = 0x00008B,
		DARK_CYAN = 0x008B8B,
		DARK_GOLDEN_ROD = 0xB886B,
		DARK_GREEN = 0x006400,
		DARK_KHAKI = 0xBDB76B,
		DARK_MAGENTA = 0x8B008B,
		DARK_OLIVE_GREEN = 0x556B2F,
		DARK_ORANGE = 0xFF8C00,
		DARK_ORCHID = 0x9932CC,
		DARK_RED = 0x8B0000,
		DARK_SALMON = 0xE9967A,
		DARK_SEA_GREEN = 0x8FBC8F,
		DARK_SLATE_GRAY = 0x2F4F4F,
		DARK_TURQUOISE = 0x00CED1,
		DARK_VIOLET = 0x9400D3,
		DEEP_SKY_BLUE = 0x00BFFF,
		DODGER_BLUE = 0x1E90FF,
		FIRE_BRICK = 0xB22222,
		FOREST_GREEN = 0x228B22,
		GOLD = 0xFFD700,
		GOLDEN_ROD = 0xDAA520,
		GREEN = 0x008000,
		GREEN_YELLOW = 0xADFF2F,
		INDIAN_RED = 0xCD5C5C,
		INDIGO = 0x4B0082,
		KHAKI = 0xF0E68C,
		LAWN_GREEN = 0x7CFC00,
		LIGHT_BLUE = 0xADD8E6,
		LIGHT_CYAN = 0xE0FFFF,
		LIGHT_CORAL = 0xF08080,
		LIGHT_GREEN = 0x90EE90,
		LIGHT_SALMON = 0xFFA07A,
		LIGHT_SEA_GREEN = 0x20B2AA,
		LIGHT_SKY_BLUE = 0x87CEFA,
		LIME = 0x00FF00,
		LIME_GREEN = 0x32CD32,
		MAROON = 0x800000,
		MEDIUM_AQUA_MARINE = 0x66CDAA,
		MEDIUM_BLUE = 0x0000CD,
		MEDIUM_ORCHID = 0xBA55D3,
		MEDIUM_PURPLE = 0x9370DB,
		MEDIUM_SEA_GREEN = 0x3CB371,
		MEDIUM_SLATE_BLUE = 0x7B68EE,
		MEDIUM_SPRING_GREEN = 0x00FA9A,
		MEDIUM_TURQUOISE = 0x48D1CC,
		MIDNIGHT_BLUE = 0x191970,
		NAVI = 0x000080,
		OLIVE = 0x808000,
		OLIVE_DRAP = 0x6B8E23,
		ORANGE = 0xFFA500,
		ORANGE_RED = 0xFF4500,
		PALE_GREEN = 0x98FB98,
		PALE_GOLDEN_ROD = 0xEEE8AA,
		PALE_TURQUOISE = 0xAFEEEE,
		POWDER_BLUE = 0xB0E0E6,
		RED = 0xFF0000,
		ROYAL_BLUE = 0x4169E1,
		SALMON = 0xFA8072,
		SEA_GREEN = 0x2E8857,
		SKY_BLUE = 0x87CEEB,
		SLATE_BLUE = 0x6A5ACD,
		SPRING_GREEN = 0x00FF7F,
		STEAL_BLUE = 0x4682B4,
		TEAL = 0x008080,
		TOMATO = 0xFF6347,
		YELLOW = 0xFFFF00,
		YELLOW_GREEN = 0x94CD32,
		WHITE = 0xFFFFFF
	};

	Color(uint8_t, uint8_t, uint8_t, uint8_t=255);
	Color(ugen::Color::Palette);
	uint8_t getRed() const;
	uint8_t getGreen() const;
	uint8_t getBlue() const;
	uint8_t getAlpha() const;
	virtual ~Color();
private:
	void setRGBA(uint8_t, uint8_t, uint8_t, uint8_t);
	union {
		struct { uint8_t r, g, b, a; };
		uint8_t data[4];
	};
};

inline uint8_t ugen::Color::getRed() const
{
	return this->r;
}

inline uint8_t ugen::Color::getGreen() const
{
	return this->g;
}

inline uint8_t ugen::Color::getBlue() const
{
	return this->b;
}

inline uint8_t ugen::Color::getAlpha() const
{
	return this->a;
}

#endif // COLOR_H
