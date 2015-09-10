#include "exceptions/VideoException.h"

namespace ugen
{
	VideoException::VideoException(const std::string& msg)
		:RuntimeException(msg, "VideoException") {}

	VideoException::VideoException(const std::string& msg, const std::string& type)
		:RuntimeException(msg, type) {}
}
