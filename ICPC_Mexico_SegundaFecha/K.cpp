#include <bits/stdc++.h>
#define endl "\n"

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> paii;
typedef vector<int> vi;

int const MAXN = 2e5+5;
pair<ll, ll> p[MAXN];

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   ll asked = 0;
   for (int i = 0; i < n; i++) cin >> p[i].first;
   for (int i = 0; i < n; i++) cin >> p[i].second;

   sort(p, p+n);

   ll count = 0;

   for (int i = n-1; i >= 0; i--){
      if (p[i].second > p[i].first){
         cout << -1 << endl;
         return 0;
      }
      else if (i == 0) count += p[i].second;
      else count += p[i].first;
   }
   cout << count << endl;
   return 0;
}
