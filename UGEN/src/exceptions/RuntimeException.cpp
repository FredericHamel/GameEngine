#include "exceptions/RuntimeException.h"

ugen::RuntimeException::RuntimeException(const std::string& msg)
	: msg_(msg), exceptName_("RuntimeException")
{
}

ugen::RuntimeException::RuntimeException(const std::string& msg, const std::string& exceptName)
	: msg_(msg), exceptName_(exceptName)
{
}

const char*
ugen::RuntimeException::what() const noexcept
{
	return msg_.c_str();
}

const char*
ugen::RuntimeException::getExceptionName() const noexcept
{
	return exceptName_.c_str();
}

std::ostream&
operator<<(std::ostream& out, ugen::RuntimeException& e)
{
	out << e.getExceptionName() << ": " << e.what();
	return out;
}
