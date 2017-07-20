#ifndef SERIALIZABLE_H
#define SERIALIZABLE_H

#include "Common.h"
#include <ostream>

class ugen::Serializable {
  public:
    virtual void serialize(std::ostream&) const = 0;
};

std::ostream& operator<<(std::ostream&, const ugen::Serializable&);

#endif
