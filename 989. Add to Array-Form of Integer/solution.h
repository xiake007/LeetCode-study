#pragma once
#include<iostream>

using namespace std;

class Solution {
public:
	vector<int> addToArrayForm(vector<int>& A, int K) {
		vector<int> B;
		while (K / 10 > 0) {
			B.push_back(K % 10);
			K /= 10;
		}
		B.push_back(K % 10);
		vector<int> c;
		int idx = 0;
		int a_n = A.size();
		int b_n = B.size();
		int add_flag = 0;
		while (idx < a_n || idx < b_n) {
			int m = 0;
			if (idx < a_n && idx < b_n) {
				m = A[a_n - 1 - idx] + B[idx] + add_flag;
			}
			else if(idx<a_n) {
				m = A[a_n - 1 - idx] + add_flag;
			}
			else {
				m = B[idx] + add_flag;
			}
			add_flag = m / 10;
			c.push_back(m % 10);
			idx++;
		}
		B.clear();
		if (add_flag > 0) {
			B.push_back(1);
		}
		for (int i = 0; i < c.size(); i++) {
			B.push_back(c[c.size() - 1 - i]);
		}

		return B;

	}
};
