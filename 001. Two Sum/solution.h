#pragma once
#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<time.h>

using namespace std;

class Solution {
public:
	/* solution 5: best hash table */
	vector<int> twoSum(vector<int>& nums, int target) {
		unordered_map<int, int> data_table;
		for (int i = 0; i < nums.size(); i++) {
			auto a = data_table.find(target - nums[i]);
			if (a != data_table.end()) {
				// i must be bigger
				return { a->second,i };  
			}
			//data_table[nums[i]] = i;
			data_table.emplace(nums[i], i);
		}
		return { -1,-1 };
	}

	/* solution 4: advanced hash table */
	vector<int> twoSum4(vector<int>& nums, int target) {
		map<int, int> data_table;
		for (int i = 0; i < nums.size(); i++) {
			auto a = data_table.find(target - nums[i]);
			if (a != data_table.end()) {
				if (i > a->second) {
					return { a->second, i };
				}
				else if (i < a->second) {
					return { i, a->second };
				}
				else {
					continue;
				}
			}
			data_table[nums[i]] = i;
		}
		return { -1,-1 };
	}
	
	/* solution 3: hash table */ 
	vector<int> twoSum3(vector<int>& nums, int target) {
		map<int, int> data_table;
		for (int i=0;i<nums.size();i++) {
			data_table[nums[i]] = i;
		}
		//print 
		//for (auto it : data_table) {
		//	cout << it.first << "\t" << it.second << endl;
		//}

		for (int i=0;i<nums.size();i++) {
			auto a = data_table.find(target - nums[i]);
			if (a != data_table.end()) {
				if (i > a->second) {
					return { a->second, i };
				}
				else if(i < a->second) {
					return {i, a->second};
				}
				else {
				continue;
				}
			}
		}
		return { -1,-1 };
	}

	/* solution 2:  sort -> double Pointer */
	vector<int> twoSum2(vector<int>& nums, int target) {
		vector<int> index;
		index.resize(nums.size());
		for (int i = 0; i < index.size(); i++) {
			index[i] = i;
		}
		//bubble sort
		for (int i = 0; i < nums.size(); i++) {
			bool change = false;
			for (int j = 0; j < nums.size() - 1 - i; j++) {
				if (nums[j] > nums[j + 1]){
					change = true;
					nums[j] = nums[j] ^ nums[j + 1];
					nums[j+1] = nums[j] ^ nums[j + 1];
					nums[j] = nums[j] ^ nums[j + 1];
					index[j] = index[j] ^ index[j + 1];
					index[j+1] = index[j] ^ index[j + 1];
					index[j] = index[j] ^ index[j + 1];
				}
			}
			if (!change) { break; }
		}
		int a = 0;
		int b = nums.size() - 1;
		while (nums[a] + nums[b] != target && a<b) {
			if (nums[a] + nums[b] < target) {
				a++;
			}
			else if (nums[a] + nums[b] > target) {
				b--;
			}
		}
		if (nums[a] + nums[b] != target) {
			return { -1,-1 };
		}
		if (index[a] < index[b]) {
			return { index[a],index[b] };
		}
		else {
			return { index[b],index[a] };
		}
	}

	/* solution 1:  brute force */
	vector<int> twoSum1(vector<int>& nums, int target) {
		for (int i = 0; i < nums.size(); i++) {
			for (int j = i; j < nums.size() - 1; j++) {
				if (nums[i] + nums[j+1] == target) {
					return { i, j+1 };
				}
			}
		}
		return { -1,-1 };
	}
};
