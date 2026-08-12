
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> paii;
typedef vector<int> vi;

// Problem: Increasing - Array 
/*
* The best strategy is to limit our movements so as to make the current value as
* big as the next one, and thus, it is only needed to keep track of said 
* changes, meaning there is no need to store the whole array.
*
* This challenge gives an important insight in the logic of related problems of
* material distribution. 
*/

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);

   int n, prev = 0, act;
   ll count = 0;
   cin >> n;

   for (int i = 0; i < n; i++){
      cin >> act;
      if (prev > act) count += prev - act; // movements needed to make act == prev
      else prev = act;
   }

   cout << count << "\n";

   return 0;
}
