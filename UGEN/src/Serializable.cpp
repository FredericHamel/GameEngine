#include "Serializable.h"

std::ostream& operator<<(std::ostream& out, const ugen::Serializable& serial) {
	serial.serialize(out);
	return out;
}
