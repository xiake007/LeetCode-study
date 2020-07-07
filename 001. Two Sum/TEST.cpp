#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "../../catch2/catch.hpp"
#include"solution.h"

TEST_CASE("test class", "[factorial]") {
	Solution s;
	vector<int> v1{ 2, 7, 11, 15 };
	REQUIRE(s.twoSum(v1, 9) == vector<int>{0, 1});
	vector<int> v2{ 3, 2, 4 };
	REQUIRE(s.twoSum(v2, 6) == vector<int>{1, 2});
	vector<int> v3{ -1,-2,-3,-4,-5 };
	REQUIRE(s.twoSum(v3, -8) == vector<int>{2, 4});
	vector<int> v4{ 3, 2, 4 };
	REQUIRE(s.twoSum(v4, 1) == vector<int>{-1, -1});
	vector<int> v5{ 3, 3 };
	REQUIRE(s.twoSum(v5, 6) == vector<int>{0, 1});
}
