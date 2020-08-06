#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "../../catch2/catch.hpp"
#include"solution.h"

TEST_CASE("test class", "[factorial]") {
	Solution s;
	vector<int> v1 = { 3, 6, 1, 0 };
	REQUIRE(s.dominantIndex(v1) == 1);
	vector<int> v2 = { 1, 2, 3, 4 };
	REQUIRE(s.dominantIndex(v2) == -1);
	vector<int> v3 = {1};
	REQUIRE(s.dominantIndex(v3) == 0);
	vector<int> v4 = { 1, 2};
	REQUIRE(s.dominantIndex(v4) == 1);
	vector<int> v5 = { 3,1 };
	REQUIRE(s.dominantIndex(v5) == 0);
	vector<int> v6 = { 1,2,3,4,4,9 };
	REQUIRE(s.dominantIndex(v6) == 5);
	vector<int> v7 = { 0,0,0 };
	REQUIRE(s.dominantIndex(v7) == -1);
	vector<int> v8 = { 0,-1,-8 };
	REQUIRE(s.dominantIndex(v8) == 0);
	vector<int> v9 = { 0,-1,1 };
	REQUIRE(s.dominantIndex(v9) == 2);
}
