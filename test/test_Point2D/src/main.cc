#include <Point2D.h>
#include <iostream>
#include <cmath>

using ugen::Point2D;


int main(int argc, char **argv)
{
  Point2D p (0,2);
  Point2D q (2,0);
  Point2D r (p);
  srand(time(nullptr));
  int x = rand();
  int y = rand();

  std::cout << p << std::endl;
  if(p.getX() == 0 && p.getY() == 2)
    std::cout << "[Passed] Point2D initialisation\n";
  else
  {
    std::cout << "[Failed] Point2D initialisation\n";
    return 1;
  }
  if(p == r)
    std::cout << "[Passed] Point2D ==\n";
  else
  {
    std::cout << "[Failed] Point2D ==\n";
    return 1;
  }

  if(p != q)
    std::cout << "[Passed] Point2D !=\n";
  else
  {
    std::cout << "[Failed] Point2D !=\n";
    return 1;
  }
  p.Move(10, 8);
  if(p.getX() == 10
      && p.getY() == 10)
    std::cout << "[Passed] Point2D Move\n";
  else
  {
    std::cout << "[Failed] Point2D Move\n";
    return 1;
  }

  q.Offset(x, y);
  if(q.getX() == x
      && q.getY() == y)
    std::cout << "[Passed] Point2D Offset\n";
  else
  {
    std::cout << "[Failed] Point2D Offset\n";
  }

  r = p + q;
  if(r.getX() == p.getX() + q.getX()
      && r.getY() == p.getY() + q.getY())
    std::cout << "[Passed] Point2D +\n";
  else
  {
    std::cout << "[Failed] Point2D +\n";
    return 0;
  }

  x = r.getX();
  y = r.getY();
  r += p;
  if(r.getX() == x + p.getX()
      && r.getY() == y + p.getY())
    std::cout << "[Passed] Point2D +=\n";
  else
  {
    std::cout << "[Failed] Point2D +=\n";
    return 0;
  }
 
  r = p - q;
  if(r.getX() == p.getX() - q.getX()
      && r.getY() == p.getY() - q.getY())
    std::cout << "[Passed] Point2D -\n";
  else
  {
    std::cout << "[Failed] Point2D -\n";
    return 0;
  }

  x = r.getX();
  y = r.getY();
  r -= p;
  if(r.getX() == x - p.getX()
      && r.getY() == y - p.getY())
    std::cout << "[Passed] Point2D -=\n";
  else
  {
    std::cout << "[Failed] Point2D -=\n";
    return 0;
  }
  return 0;
}

