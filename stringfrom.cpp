#include "CppUTest/SimpleString.h"

#include <vector>
#include <sstream>

SimpleString StringFrom(const std::vector<unsigned int> &v)
{
  std::ostringstream v_stream;
  v_stream << '{';
  if (v.size()) {
    v_stream << v[0];
    for (int i = 1; i < v.size(); i++)
      v_stream << ", " << v[i];
  }
  v_stream << '}';
  return v_stream.str().c_str();
}

