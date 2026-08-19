
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> paii;
typedef vector<int> vi;

// Problem: Bit Strings - CSES
/*
* Basic bit shifting.
*/

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);

	ll mod = 1e9 + 7;
	int n; cin>>n;
	ll res = 1;

	while (n--){
		res <<= 1LL;
		res %= mod;
	}
	cout << res << "\n";
	return 0;
}
