#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "../../catch2/catch.hpp"
#include"solution.h"

TEST_CASE("test class", "[factorial]") {
	Solution s;
	vector<int> v1 { 1,7,3,6,5,6 };
	REQUIRE(s.pivotIndex(v1) == 3);
	vector<int> v2 { 1,2,3 };
	REQUIRE(s.pivotIndex(v2) == -1);
	vector<int> v3 { 1 };
	REQUIRE(s.pivotIndex(v3) == 0);
	vector<int> v4 { 1,2,3,4,10};
	REQUIRE(s.pivotIndex(v4) == -1);
	vector<int> v5 { };
	REQUIRE(s.pivotIndex(v5) == -1);
	vector<int> v6 {-1,-2,-4,-1,0,-5,-3};
	REQUIRE(s.pivotIndex(v6) == 4);
	vector<int> v7 {-1,3,-4,5,-6,-5,-3};
	REQUIRE(s.pivotIndex(v7) == 5);
	vector<int> v8{ -1,-1,-1,0,1,1 };
	REQUIRE(s.pivotIndex(v8) == 0);
	vector<int> v9{ 1,0 };
	REQUIRE(s.pivotIndex(v9) == 0);

}
