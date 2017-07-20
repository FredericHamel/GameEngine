#include "Debug.h"
#include <cstdlib>
#include <fstream>

static std::string LOG_FILE_NAME("GameEngine.log");

void Debug::init(std::string filename)
{
  LOG_FILE_NAME = filename;
}

void Debug::reset()
{
  std::ofstream out(LOG_FILE_NAME);
  out.close();
}

void Debug::check_assertion(bool expr, const StringConcat& str)
{
  if(expr)
  {
    Debug::error(str);
  }
}

void Debug::error(const StringConcat& str)
{
  std::ofstream out(LOG_FILE_NAME, std::ios::app);
  out << "[ ERROR ] " << str << '\n';
  out.close();
}

void Debug::warning(const StringConcat& str)
{
  std::ofstream out(LOG_FILE_NAME, std::ios::app);
  out << "[WARNING] " << str << '\n';
  out.close();
}

void Debug::log(const StringConcat& str)
{
  std::ofstream out(LOG_FILE_NAME, std::ios::app);
  out << "[  LOG  ] "<< str << '\n';
  out.close();
}
