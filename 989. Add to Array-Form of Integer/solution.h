#pragma once
#include<iostream>

using namespace std;

class Solution {
public:
	vector<int> addToArrayForm(vector<int>& A, int K) {
		int N = A.size();
		int idx = N-1;
		vector<int> ans;
		while (idx >=0 || K>0) {
			if (idx >= 0) {
				K += A[idx--];
			}
			ans.push_back(K % 10);
			K /= 10;
		}
		reverse(ans.begin(), ans.end());
		return ans;
	}
	vector<int> addToArrayForm3(vector<int>& A, int K) {
		int idx = 0;
		int a_n = A.size();
		int add_flag = 0;
		int tmp = 0;
		while (idx < a_n || K >0) {
			if (idx < a_n && K >0) {
				tmp = A[a_n - 1 - idx] + K % 10 + add_flag;
				A[a_n - 1 - idx] = tmp % 10;
				K /= 10;
			}
			else if (idx < a_n) {
				tmp = A[a_n - 1 - idx] + add_flag;
				A[a_n - 1 - idx] = tmp % 10;
			}
			else {
				tmp = K % 10 + add_flag;
				A.insert(A.begin(), tmp % 10);
				K /= 10;
			}
			add_flag = tmp / 10;
			idx++;
		}
		if (add_flag > 0) {
			A.insert(A.begin(), add_flag);
		}
		return A;
	}
	vector<int> addToArrayForm2(vector<int>& A, int K) {
		vector<int> B;
		while (K > 0) {
			B.push_back(K % 10);
			K /= 10;
		}
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
