#pragma once
#include<iostream>

using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0, leftsum = 0;
        for (auto i : nums) {
            sum += i;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (leftsum == sum - nums[i] - leftsum) {
                return i;
            }
            leftsum += nums[i];
        }
        return -1;
    }
    int pivotIndex2(vector<int>& nums) {
        int N = nums.size();
        if (N == 0 ) return -1;
        int sum = 0;
        for (int i = 0; i < N; i++) {
            sum += nums[i];
        }
        int sum1 = 0;
        int idx = 0;
        int sum2 = sum - sum1 - nums[idx];
        while (sum1 != sum2 && idx < N-1) {
            sum1 += nums[idx++];
            sum2 -= nums[idx];
        }
        if (sum1 == sum2) {
            return idx;
        }
        else {
            return -1;
        }
    }
};
