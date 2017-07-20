#ifndef VIDEO_EXCEPTION_H
#define VIDEO_EXCEPTION_H

#include "./RuntimeException.h"

#pragma GCC visibility push(default)

namespace ugen
{
  class VideoException : public RuntimeException
  {
    public:
      VideoException(const std::string&);
    protected:
      VideoException(const std::string&, const std::string&);
  };
}

#pragma GCC visibility pop

#endif
