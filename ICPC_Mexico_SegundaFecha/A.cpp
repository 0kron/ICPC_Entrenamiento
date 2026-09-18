#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> paii;
typedef vector<int> vi;

int const MAXN = 1e5+5;
ll c[MAXN], v[MAXN];

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   
   c[0] = v[0] = 0;
   int n; cin >> n;
   ll ac, av;
   for(int i = 1; i<n+1; i++){
      cin >> ac >> av; 
      c[i] = c[i-1] + ac;
      v[i] = v[i-1] + av;
   }
   int q; cin >> q;
   while (q--){
      cin >> ac; 
      if ((double) (c[ac] - v[ac]) / (c[ac] + v[ac]) > 0) cout << "COMPRA" << endl;
      else if ((double) (c[ac] - v[ac]) / (c[ac] + v[ac]) < 0) cout << "VENDA" << endl;
      else cout << "NEUTRO" << endl;
   }


   return 0;
}
