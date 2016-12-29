#include <iostream>
#include <iomanip>
#include <Color.h>

#define TEST(c, r, g, b, a, msg) \
  if ((c).getRed() == (r) && (c).getGreen() == (g) && (c).getBlue() == (b) && (c).getAlpha() == (a)) {\
    std::cout << "[Passed] " << (msg) << std::endl; \
    pass++;\
  } else {\
    std::cout << "[Failed] " << (msg) << std::endl; \
    failed++;\
  }

int main(int argc, char **argv)
{
  int pass = 0;
  int failed = 0;
  ugen::Color a(ugen::Color::CORN_FLOWER_BLUE);
  ugen::Color b(ugen::Color::MEDIUM_ORCHID);
  ugen::Color c(255, 128, 64, 32);
  ugen::Color d = c;
  TEST(a, 0x64, 0x95, 0xed, 0x0, "Inititialisation using Color enum test 1")
  TEST(b, 0xba, 0x55, 0xd3, 0x0, "Inititialisation using Color enum test 2")
  TEST(c, 255, 128, 64, 32, "Construct using rgba color")
  TEST(d, 255, 128, 64, 32, "Copy constructor")
  std::cout << "Test passed: " << pass << "/" << (pass+failed) << std::endl;
  return 0;
}
