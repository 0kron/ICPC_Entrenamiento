#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> paii;
typedef vector<int> vi;


int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t, c, k; cin >> t >> c >> k;
   cout << min(c, t*k) << endl;

   return 0;
}
