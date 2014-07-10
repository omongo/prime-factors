#include "CppUTest/CommandLineTestRunner.h"
#include "stringfrom.h"
#include "prime_factors.h"

#include <vector>

TEST_GROUP(PrimeFactors) {
};

TEST(PrimeFactors, 2ShouldReturnListOf2) {
  CHECK_EQUAL(std::vector<unsigned int> ({2u}), prime_factors(2u));
}

TEST(PrimeFactors, 3ShouldReturnListOf3) {
  CHECK_EQUAL(std::vector<unsigned int> ({3u}), prime_factors(3u));
}

TEST(PrimeFactors, 4ShouldReturnListOf2And2) {
  CHECK_EQUAL(std::vector<unsigned int> ({2u, 2u}), prime_factors(4u));
}

TEST(PrimeFactors, 6ShouldReturnListOf2And3) {
  CHECK_EQUAL(std::vector<unsigned int> ({2u, 3u}), prime_factors(6u));
}

TEST(PrimeFactors, 9ShouldReturnListOf3And3) {
  CHECK_EQUAL(std::vector<unsigned int> ({3u, 3u}), prime_factors(9u));
}

TEST(PrimeFactors, 12ShouldReturnListOf2And2And3) {
  CHECK_EQUAL(std::vector<unsigned int> ({2u, 2u, 3u}), prime_factors(12u));
}

TEST(PrimeFactors, 15ShouldReturnListOf3And5) {
  CHECK_EQUAL(std::vector<unsigned int> ({3u, 5u}), prime_factors(15u));
}

int main(int argc, char *argv[]) {
  return RUN_ALL_TESTS(argc, argv);
}

