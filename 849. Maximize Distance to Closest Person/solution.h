#pragma once
#include<iostream>

using namespace std;

class Solution {
public:
    //利用了最后一个数不为0是，zero会置0
	int maxDistToClosest(vector<int>& seats) {
		int dist, zero, i;

		dist = 0;
		while (seats[dist] == 0)
			++dist;
		zero = 0;
		for (i = dist + 1; i < seats.size(); ++i)
			if (seats[i] == 0) {
				++zero;
			}
			else {
				dist = max(dist, (zero + 1) / 2);
				zero = 0;
			}

		return max(dist, zero);
	}
	int maxDistToClosest2(vector<int>& seats) {
		int zero_cnt = 0;
		int max_dist = 0;
		for (int i = 0; i < seats.size(); i++) {
			if (seats[i] == 0) {
				zero_cnt += 1;
				if (i == seats.size() - 1) {
					return max(zero_cnt, max_dist);
				}
			}
			else {
				if (zero_cnt == i) {
					max_dist = i;
				}
				else {
					max_dist = max((zero_cnt + 1) / 2, max_dist);
				}
				zero_cnt = 0;
			}
		}
		return max_dist;
	}
};
