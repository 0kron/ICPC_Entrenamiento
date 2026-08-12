
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> paii;
typedef vector<int> vi;

// Problem: Wierd Algorithm - CSES 
/*
* Given the constrains of n <= 1e6, we can suspect that it would be more than
* enough to simulate without DP the complete Collatz Conjecture by hand.
*/

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);

   ll n; 
   cin >> n; 
   cout << n << " ";
   while (n != 1){
      if (n % 2 == 0) n /= 2;
      else n = n * 3 + 1;
      cout << n << " "; 
   }
   cout << "\n"; 

   return 0;
}
