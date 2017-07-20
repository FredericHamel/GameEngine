/*
 * Copyright (C) 2006-2013 Christopho, Solarus - http://www.solarus-games.org
 * 
 * Solarus is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * Solarus is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef SOLARUS_STRING_CONCAT_H
#define SOLARUS_STRING_CONCAT_H

#include <sstream>
/**
 * \brief A subclass of std::string that add operators
 * to directly concatenate elements.
 */
class StringConcat: public std::string {

  public:

    StringConcat& operator<<(const char* const);
    template <typename T> StringConcat& operator<<(const T &element);

  private:

    std::ostringstream oss;    /**< used to concatenate non string objects to this string */
};

/**
 * \brief Appends a string to this string.
 * \param element the string to append
 * \return this string
 */
inline StringConcat& StringConcat::operator<<(const char* const element) {

  append(element);
  return *this;
}

/**
 * \brief Appends an object to this string.
 * \param element the object to append
 * \return this string
 */
template <typename T>
inline StringConcat& StringConcat::operator<<(const T& element) {

  oss.str("");
  oss << element;
  append(oss.str());
  return *this;
}

#endif
