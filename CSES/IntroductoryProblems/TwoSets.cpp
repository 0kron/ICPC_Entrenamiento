
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> paii;
typedef vector<int> vi;
typedef vector<bool> vb;

// Problem: Two Sets - CSES 
/*
* Given n, the task is to find two sets of equal sum inside 1..n. First we need
* to validate whether or not it is possible to create such sets, and if so, 
* output its size and configuration regardless of the order.
*
* Notice that in order to have a possible solution, the first requisite is to
* have sum(1..n) be an odd integer. After in case it is even, then we can simply
* create the first set by adding from the largest to smallest values from 1 to n
* as long as they do not exceed sum/2, keeping track of which ones where
* selected, and the ones that aren't, are part of the second set.
*/

const int MAXN = 1e6+1;
bool used[MAXN];

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);

   ll n; cin >> n;
   ll sum = n * (n+1) / 2;

   // when there is no possible sum.
   if (sum % 2 != 0){
      cout << "NO\n";
      return 0;
   }
   cout << "YES\n";

   ll act = 0; int count = 0, i = n;
   while (i > 0){
      if (act + i <= sum/2){
         act += i;
         used[i] = 1;
         count++;
      }
      i--;
   }
   cout << count << "\n";
   for (int i = n; i > 0; i--) 
      if (used[i]) cout << i << (i == 1 ? '\n' : ' ');

   cout << n - count << "\n";
   for (int i = n; i > 0; i--) 
      if (!used[i]) cout << i << (i == 1 ? '\n' : ' ');

   return 0;
}
