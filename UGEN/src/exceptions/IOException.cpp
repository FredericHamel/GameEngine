#include "exceptions/IOException.h"

using namespace ugen;

IOException::IOException(const std::string& msg)
  :RuntimeException(msg, "IOException")
{
}

IOException::IOException(const std::string& msg, const std::string& type)
  :RuntimeException(msg, type)
{
}
