#include <bits/stdc++.h>
#define endl "\n"

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> paii;
typedef vector<int> vi;

const int MAXN = 2e5;
ll a[MAXN];

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   
   int n, q; cin >> n >> q;
   ll sum, best;
   int x;
   for (int i = 0; i < n; i++){
      cin >> a[i];
   }

   while(q--){
      sum = 0, best = INT_MIN;
      cin >> x;
      for (int k = x; k < n; k++){
         sum = max(a[k], sum+a[k]);
         best = max(best, sum);
         // cout << x << ": " << k << ' ' << sum << ' ' << best << endl;
      }
      cout << best << endl;
   }

   return 0;
}
