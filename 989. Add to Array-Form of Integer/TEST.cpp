#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "../../catch2/catch.hpp"
#include"solution.h"

TEST_CASE("test class", "[factorial]") {
	Solution s;
	vector<int> v1 = { 1,2,0,0 };
	REQUIRE(s.addToArrayForm(v1, 34) == vector<int>{1, 2, 3, 4});
	vector<int> v2 = { 2,7,4 };
	REQUIRE(s.addToArrayForm(v2, 181) == vector<int>{4, 5, 5});
	vector<int> v3 = { 2,1,5 };
	REQUIRE(s.addToArrayForm(v3, 806) == vector<int>{1, 0, 2, 1});
	vector<int> v4 = { 9,9,9,9 };
	REQUIRE(s.addToArrayForm(v4, 1) == vector<int>{1,0,0,0,0});
}
