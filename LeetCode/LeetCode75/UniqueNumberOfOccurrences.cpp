#include <bits/stdc++.h>
#define endl "\n"

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> paii;
typedef vector<int> vi;

// Problem: Unique Number of Occurrences - Leet75

class Solution {
public:
   bool uniqueOccurences(vector<int> &arr){
		unordered_map<int, int> freq;
		unordered_set<int> app_freq;
		for (int i : arr){
			freq[i]++;
		}
		for (auto i : freq){
			if (app_freq.count(i.second)) return false;
			app_freq.insert(i.second);
		}
		return true;
	}
};

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   Solution solve;
   vector<int> nums = {1, 2};
   cout << solve.uniqueOccurences(nums) << endl;
	
   return 0;
}
