#include <bits/stdc++.h>
#define endl "\n"

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> paii;
typedef vector<int> vi;
typedef map<int, int> mii;

// Problem: Sum of Two Values - CSES 
/*
* First idea is to create a map with the complements, meaning, as soon as 
* a value is given, check wheter or not, the complement has already been given,
* and if so, return said couple, else, add the current value to the map.
*/

map <int, int> values;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);

   int n, x, aux; cin >> n >> x;
   int i = 1;

   while (n--){
      cin >> aux;
      if (values[x-aux]){
         cout << i << ' ' << values[x-aux] << endl;
         return 0;
      }
      values[aux] = i;
      i++;
   }

   cout << "IMPOSSIBLE" << endl;

   return 0;
}
