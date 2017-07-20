#ifndef _RUNTIME_EXCEPTION_H
#define _RUNTIME_EXCEPTION_H

#include <exception>
#include <ostream>
#include <string>

#pragma GCC visibility push(default)

namespace ugen {

  class RuntimeException : public std::exception
  {
    std::string msg_, exceptName_;
    public:
      RuntimeException(const std::string&);

      const char* what() const noexcept;

      const char* getExceptionName() const noexcept;

    protected:
      RuntimeException(const std::string&, const std::string&);
  };
}

std::ostream& operator<<(std::ostream&, ugen::RuntimeException&);

#pragma GCC visibility pop

#endif //_RUNTIME_EXCEPTION_H
