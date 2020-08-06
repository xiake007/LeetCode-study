#pragma once
#include<iostream>

using namespace std;

class Solution {
public:
	int dominantIndex(vector<int>& nums) {
		if (nums.size() < 2) return -1;
		int fir_max_data = -1;
		int sec_max_data = -1;
		int fir_max_idx = -1;
		for (int i = 0; i < nums.size(); i++) {
			if (nums[i] > fir_max_data) {
				if (fir_max_data > sec_max_data) {
					sec_max_data = fir_max_data;
				}
				fir_max_data = nums[i];
				fir_max_idx = i;
			}
			else if (nums[i] > sec_max_data) {
				sec_max_data = nums[i];
			}
		}
		if (fir_max_data == sec_max_data) return -1;
		return (fir_max_data >= sec_max_data * 2 ? fir_max_idx : -1);
	}
};
