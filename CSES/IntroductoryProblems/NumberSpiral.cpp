
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> paii;
typedef vector<int> vi;

// Problem: Number Spiral - CSES 
/*
* By the construction of the so-called Spiral, it is clear that as t grows, 
* the maximum value stored inside will be t^2. And with the contrains that means
* that a ll will be needed to analyze the values inside our Spiral. 
*
* Now, the idea is to find the pattern by the composition. Notice that the odd
* columns end at its column index squared (column 1 at 1, column 3 at 9, etc.)
* And viceversa with the ends at the odd squared. Now, the orientation is also
* given by the "layer" you are in, which is given by the largest of the two 
* coordinates. 
*
* After finding the layer, it is a matter of the parity of the layer and then
* it's position inside said layer.
*/

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);

   int t; cin >> t; 
   ll res, x, y, mx, mn;

   for (int i = 0; i < t; i++){
      cin >> y >> x; 
      mx = max(x, y);
      mn = min(x, y);
      res = mx * mx - (mx - 1); // begining of the layer regardless parity
      if (mx % 2 == 0){ // even layer
         if (mn == y) res -= mx - mn; 
         else res += mx - mn; 
      }
      else{
         if (mn == y) res += mx - mn; 
         else res -= mx - mn;
      }
      cout << res << endl; 
   }

   return 0;
}
