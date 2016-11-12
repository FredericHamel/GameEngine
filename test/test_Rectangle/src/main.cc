#include "Rectangle.h"
#include "Point2D.h"
#include <iostream>

using ugen::Rectangle;
using ugen::Point2D;

int main(int argc, char** argv)
{
  Point2D pt(45,6);
  Rectangle rect(1,2,640,480);
  Rectangle rect_p(2,3,640,480);
  const SDL_Rect& srect = static_cast<const SDL_Rect&>(rect);
  std::cout << rect <<std::endl;
 
  if(rect.getX() == 1
      && rect.getY() == 2
      && rect.getWidth() == 640
      && rect.getHeight() == 480)
  {
    std::cout << "[Passed] Rectangle initialisation\n";
  }
  else {
    std::cout << "[Failed] Rectangle initialisation\n";
    return 1;
  }

  if(srect.x == rect.getX()
      && srect.y == rect.getY()
      && srect.w == rect.getWidth()
      && srect.h == rect.getHeight())
    std::cout << "[Passed] Basic cast\n";
  else
  {
    std::cout << "[Failed] Basic cast\n";
    return 1;
  }


  rect.Move(1,1);
  if(srect.x == 2
      && srect.y == 3)
  {
    std::cout << "[Passed] Rectangle moved\n";
  }else
  {
    std::cout << "[Failed] Rectangle moved\n";
    return 1;
  }

  if(rect == rect_p)
  {
    std::cout << "[Passed] Rectangle ==\n";
  }else
  {
    std::cout << "[Failed] Rectangle ==\n";
    return 1;
  }
  
  if(!(rect != rect_p))
  {
    std::cout << "[Passed] Rectangle !=\n";
  }else
  {
    std::cout << "[Failed] Rectangle !=\n";
    return 1;
  }

  rect.Offset(pt);
  if(srect.x == pt.getX()
      && srect.y == pt.getY())
  {
    std::cout << "[Passed] Rectangle Offset\n";
  }else
  {
    std::cout << "[Passed] Rectangle Offset\n";
    return 1;
  }
  return 0;
}
