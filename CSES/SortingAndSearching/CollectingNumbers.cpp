#include <bits/stdc++.h>
#define endl "\n"

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> paii;
typedef vector<int> vi;

// Problem: Collecting - Numbers 
/*
* The problem gives us the numbers between 1 and n, in a random order, and the 
* idea is to count how many times do we have to pass through the array to count
* all the values in increasing order. For example the following array: 
*        1, 3, 4, 2, 5
* Requires two readings as in the first one you will take:
*        1, 3, 4,    5
* And in the second round you'll get: 2
*
* Thus, given we have a sorted list of the numbers and have the corresponding
* original index of them, we will only need to count how many times, the 
* index returned to a lower value. 
*
* ind     1 2 3 4 5       1 4 2 3 5
* val     1 3 4 2 5  ->>  1 2 3 4 5
*
* Counting how many times, we returned to a lower value means taking into
* account how many returns to a skipped value do we have to make, as we returned
* to previous cases.
*/


int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);

   int n, aux; cin >> n;
   vector<paii> k(n);
   for (int i = 0; i < n; i++){
      cin >> aux;
      k[i] = {aux, i};
   }

   sort(k.begin(), k.end());

   int ind = -1, count = 1;
   for (int i = 0; i < n; i++){
      if (ind > k[i].second) count++;
      // cout << ind << ' ' << k[i].first << ' ' << count << endl;
      ind = k[i].second;
   }

   cout << count << endl;
   return 0;
}
