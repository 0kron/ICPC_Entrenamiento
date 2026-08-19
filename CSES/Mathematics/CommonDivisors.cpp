
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> paii;
typedef vector<int> vi;

// Problem: Common Divisors - CSES 
/*
* We know that tne GCD of any two numbers in the array is at most the largest
* number in the array. So iterating for every value from that maximum maxn in 
* the array to 1, and looking whether or not there are at least two multiples
* of said number inside the array will give us the correct answer.
*
* Example: 
* array = [3, 14, 15, 7, 9]
* then maxn = 15
* iterating: 
*  how many multiples there are of i?
*  if more or equal to 2, then return i
*
* else:
*  return 1, as 1 divides every integer.
*/

const int MAXN = 1e6+1;
vi cd(MAXN, 0);

int findGCD(int maxn, vi cd){
   for (int i = maxn; i > 0; i--){
      int nmultiples = 0;
      for (int j = i; j <= maxn; j+=i){
         nmultiples += cd[j];
         if (nmultiples > 1) return i;
      }
   }
   return 1;
}

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n, x, maxn = 0;
   cin >> n;
   while (n--){
      cin >> x;
      cd[x]++;
      maxn = max(maxn, x);
   }

   cout << findGCD(maxn, cd) << "\n";


   return 0;
}
