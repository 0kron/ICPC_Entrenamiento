#include <bits/stdc++.h>
#define endl "\n"

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> paii;
typedef vector<int> vi;

// Problem: Single Number - Leet75

class Solution {
public:
	int singleNumber(vector<int> &nums) {
		int res = nums[0];
		for (int i = 1; i < nums.size(); i++){
			res ^= nums[i];
		}

		return res;
	}
};


int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   Solution solve;
   vector<int> nums = {4, 1, 2, 1, 2};
	cout << solve.singleNumber(nums) << endl;	
   return 0;
}
