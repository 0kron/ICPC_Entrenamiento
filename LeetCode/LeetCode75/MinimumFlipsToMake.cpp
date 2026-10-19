#include <bits/stdc++.h>
#define endl "\n"

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> paii;
typedef vector<int> vi;

// Problem: Minimum Flips to Make a OR b equal to c - Leet75

class Solution {
public:
	int minFlips(int a, int b, int c){
		int flips = 0, aux;
		for (int i = 0; i < 31; i++){
			aux = 1 << i;
			if (c & aux){
				if (!(a & aux) && !(b & aux)) flips++;
			}
			else {
				if (a & aux) flips++;
				if (b & aux) flips++;
			}
		}
		return flips;
	}
};

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   Solution solve;
	int a = 2, b = 6, c = 5;
   cout << solve.minFlips(a, b, c) << endl;
	
   return 0;
}
