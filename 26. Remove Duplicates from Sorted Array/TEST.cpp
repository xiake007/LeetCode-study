#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "../../catch2/catch.hpp"
#include"solution.h"

TEST_CASE("test class", "[factorial]") {
	Solution s;
	vector<int> v1{ 1,1,2 };
	REQUIRE(s.removeDuplicates(v1) == 2);
	vector<int> v2{0,0,1,1,1,2,2,3,3,4 };
	REQUIRE(s.removeDuplicates(v2) == 5);
	//--
}
