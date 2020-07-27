#pragma once
#include<iostream>

using namespace std;

class Solution {
public:    
	int removeDuplicates(vector<int>& nums) {
		if (nums.size() == 0) return 0;
		int idx_pre = 0;
		for (int idx_next = 1; idx_next < nums.size(); idx_next++) {
			if (nums[idx_pre] != nums[idx_next]) {
				idx_pre++;
				nums[idx_pre] = nums[idx_next];
			}
		}
		return idx_pre + 1;
	}
	int removeDuplicates2(vector<int>& nums) {
		if (nums.size() == 0) return 0;
		int idx_pre=0;
		int idx_next=1;
		int n = nums.size();
		while (idx_next < n) {
			int del_m = 0;
			while (idx_next < n && nums[idx_pre] == nums[idx_next]){
				idx_next++;
			}
			if (idx_next == n) {
				return idx_pre + 1;
			}
			idx_pre++;
			nums[idx_pre] = nums[idx_next];
			idx_next++;
		}
		return idx_pre+1;
		
	}
};
