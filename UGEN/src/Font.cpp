
#include "Font.h"

namespace ugen
{
  Font::Font()
    :id(""), font(nullptr)
  {
  }

  Font::Font(std::string name)
    :id(name), font(nullptr) 
  {
  }

  Font::~Font() {
    if(font) {
      TTF_CloseFont(font);
      font = nullptr;
    }
  }
}

