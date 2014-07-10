#include <vector>

std::vector<unsigned> prime_factors(unsigned number) {
  std::vector<unsigned> v;
  for (unsigned i = 2u; number > 1u; ++i)
    for (; number % i == 0u; number /= i)
      v.push_back(i);
  return v;
}
