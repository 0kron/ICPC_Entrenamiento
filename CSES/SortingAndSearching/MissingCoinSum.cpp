#include <bits/stdc++.h>
#define end "\n"

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> paii;
typedef vector<int> vi;

// Problem: Missing Coin Sum - CSES
/*
* This problem has a DP solution, spoiler to Money Sums, however, that is 
* probably an overkill for this section. Moreover, the size of the constraints
* makes this problem really heavy to do inside a DP. 
*
* The argument is by induction, of the following: given we can create the sums
* of the values between 1 and k, now, what happens when we add another coin?
* If the new coin has a value less or equal than k, then we can use it to 
* generate the values from 1 to k+i (with i the new value); else it would be
* impossible to generate k+1. It is necessary to sort the coins before 
* introducing this methodology.
*/

const int MAXN = 2e5 + 1;
int x[MAXN];

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   for (int i = 0; i < n; i++) cin >> x[i];
   sort(x, x+n);
   ll k = 1; // upper bound of possible sums
   for(int i = 0; i < n && k >= x[i]; i++){
      k += x[i]; // we increase the upper bound by new found value
   }

   cout << k << endl;

   return 0;
}
