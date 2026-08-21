#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> paii;
typedef vector<int> vi;

// Problem: Apartaments - CSES
/*
* This problem has two basic solutions, firt use either map or set, with
* look up time of O(log n), and do so n times, which gives O(n log n). And 
* the other one (that I know of) is sorting the list and checking every change,
* meaning when the previous is different from the actual value as you iterate.
*/

const int MAXN = 1e9 + 1;
map<int, int> uniq;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n, aux;
   cin >> n;
   while (n--){
      cin >> aux;
      if (!uniq[aux]) uniq[aux] = 1;
   }
   cout << uniq.size() << endl;

   return 0;
}
