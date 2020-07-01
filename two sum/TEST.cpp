#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "../../catch2/catch.hpp"
#include"solution.h"

TEST_CASE("test class", "[factorial]") {
	Solution s;
	REQUIRE(s.Factorial(1) == 1);
	REQUIRE(s.Factorial(2) == 2);
	REQUIRE(s.Factorial(3) == 6);
	REQUIRE(s.Factorial(10) == 3628800);
}
