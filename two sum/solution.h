#pragma once
#include<iostream>

using namespace std;

class Solution {
public:
	unsigned int Factorial(unsigned int number) {
		return number <= 1 ? number : Factorial(number - 1)*number;
	}
};
