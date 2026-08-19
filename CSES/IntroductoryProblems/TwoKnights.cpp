#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> paii;
typedef vector<int> vi;

// Problem: Two Knights - CSES 
/*
* The idea is to substract the number of attacking possitions to the number of
* possible combinations. 
*
* Number of possible combinations = n^2 (n^2 - 1) / 2
* Number of attacking possitions = 2(n-1)(n-2) <-- for vertical attacks (2x3)
*                                + 2(n-2)(n-1) <-- for horizontal attacks (3x2)
*                                = 4(n-2)(n-1)
*
* Result n^2 (n^2 - 1) / 2 - 4(n-2)(n-1)
*/

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);

   ll n; cin >> n;
   ll res;
   for (ll k = 1; k<= n; k++){
      res = pow(k, 2) * (pow(k, 2) - 1) / 2 - 4 * (k - 1) * (k - 2);
      cout << res << "\n";
   }

   return 0;
}
