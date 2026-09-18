#include <bits/stdc++.h>
#define endl "\n"

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> paii;
typedef vector<int> vi;

// Problem: N
//

ll f(ll s){
   ll x_s = ceil(sqrt(2*s));
   if (x_s * x_s + x_s <= 2*s) return x_s;
   else return ceil(sqrt(2*s) - 1);
}

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);

   ll l, r; cin >> l >> r;
   // cout << f(r) - f(l - 1) << endl;

   ll i = 0;
   ll count = 0;
   while(i*(i+1) <= r*2 ){
      if (i*(i + 1) >= l*2) count ++;
      i++;
   }
   cout << count<< endl;


   return 0;
}
