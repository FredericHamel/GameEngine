#include "exceptions/FileNotFoundException.h"

ugen::FileNotFoundException::FileNotFoundException(const std::string& msg)
  :ugen::IOException(msg, "FileNotFoundException") {}
