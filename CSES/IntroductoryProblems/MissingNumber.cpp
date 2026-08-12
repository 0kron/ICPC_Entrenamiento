
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> paii;
typedef vector<int> vi;

// Problem: Missing Number - CSES 
/*
* The idea is using firstly the conmutative property of the sum under the 
* integers, to then use the previously known Euler's sum, meaning, we can in 
* O(1) compute the result of sum(1..n), the only missing value, regardless of 
* the order of input will be: sum(input) - sum(1..n).
*
* A thing to consider is, eventhough every number between 1 and n will be less 
* than 2e9, and thus storable inside a 32int, the sum of the numbers requieres
* at most a computation of n^2, meaning a 64int (ll) will be necessary. Thus to
* ease the writing speed making everything of type ll is justifiable. 
*/

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);

   ll n, aux, m, sum = 0; 
   cin >> n; 
   m = ((n+1)*n) / 2; 
   for (int i = 0; i < n-1; i++){
      cin >> aux; 
      sum += aux; 
   }
   cout << m - sum << endl; 

   return 0;
}
