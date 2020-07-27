#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "../../catch2/catch.hpp"
#include"solution.h"

TEST_CASE("test class", "[factorial]") {
	Solution s;
	vector<int> v1{ 1,0,0,0,1,0,1 };
	REQUIRE(s.maxDistToClosest(v1) == 2);
	vector<int> v2{ 1,0,0,0};
	REQUIRE(s.maxDistToClosest(v1) == 3);
	vector<int> v3{ 1,0};
	REQUIRE(s.maxDistToClosest(v1) == 1);
	vector<int> v5{ 1,0,0,1};
	REQUIRE(s.maxDistToClosest(v1) == 1);
	vector<int> v6{ 0,0,0,1};
	REQUIRE(s.maxDistToClosest(v1) == 3);
}
