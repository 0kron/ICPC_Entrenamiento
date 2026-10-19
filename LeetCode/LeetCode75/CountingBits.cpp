#include <bits/stdc++.h>
#define endl "\n"

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> paii;
typedef vector<int> vi;

// Problem: Counting Bits - Leet75
//
// The idea is the following, notice how every new most significant bit creates
// a replication of the previous values before it. So we just have to take it
// into account (1+) and add what the previous values where. For example: 
// 0 -> 0000
// 1 -> 0001
// 2 -> 0010
// 3 -> 0011
// 4 -> 0100
// 5 -> 0101
// 6 -> 0110
// 7 -> 0111
// 8 -> 1000
//
// Here, after arriving to 4, the same changes of the rightmost bits will be
// the same ones as from 0 - 3, meaning, the most significant bit will only add
// one to the previously founded. The most significant bit is called the offset.

class Solution {
public:
   vector<int> countBits(int n){
		vector<int> ans(n+1, 0);
		int offset = 1;

		for (int i = 1; i <= n; i++) {
			if (offset * 2 == i) offset = i;
			ans[i] = 1 + ans[i - offset];
		}

		return ans;
	}
};

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   Solution solve;
   int num = 5;
   vi ans = solve.countBits(num);

	for (int i : ans) 
		cout << i << ' ';

	cout << endl;
	
   return 0;
}
