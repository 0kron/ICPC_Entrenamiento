#include <bits/stdc++.h>
#define end "\n"

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> paii;
typedef vector<int> vi;

// Problem: Maximum Subarray Sum - CSES 
/*
* This is the famous Kadane's Algorithm, which consist of forgetting the past, 
* meaning, with every new number, evaluate if it is worthy to keep it in the 
* sum or to restart the sum. And of course, as we need the maximum possible 
* sum, then we keep track of it.
*/

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);

   ll mx = INT_MIN, past = 0, aux;
   int n; cin >> n;

   while (n--){
      cin >> aux;
      past = max(past + aux, aux);
      mx = max(mx, past);
   }
   cout << mx << endl;
   return 0;
}
