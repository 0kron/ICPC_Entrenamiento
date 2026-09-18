
#include <bits/stdc++.h>
#define endl "\n"

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> paii;
typedef vector<int> vi;

// Problem: Title - Source 
/*
* Segmented tree
*/

const ll INF = 1e17;

struct Tnode{
   int l, r;
   ll sum, pref, suf, ans;
   
   Tnode *ch[2];
   void merge(){
      sum = ch[0]->sum + ch[1]->sum;
      pref = max(ch[0]->pref, ch[0]->sum + ch[1]->pref);
      suf = max(ch[1]->suf, ch[0]->suf + ch[1]->sum);
      ans = max(max(ch[0]->ans, ch[1]->ans), ch[0]->suf + ch[1]->pref);
   }

   Tnode(int L, int R, vector<ll> &V){
      l = L;
      r = R;

      if (L == R){
         sum = V[L];
         pref = max(0LL, sum);
         suf = ans = pref;
         return;
      }
      else {
         int Mid = (L + R) >> 1;
         ch[0] = new Tnode(L, Mid, V);
         ch[1] = new Tnode(Mid + 1, R, V);
         merge();

      }
   }

   void upd(int i, ll x){
      if (i < l || r < i) return;
      if (i == 1 && i == r){
         sum = x;
         pref = max(0LL, x);
         ans = suf = pref;
         return;
      }
      ch[0]->upd(i, x);
      ch[1]->upd(i, x);
      merge();
   }

   ll interval(int a, int b){
      return 
   }

}; ex

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);

   int n, q;
   cin >> n >> q;

   vector<ll> V(n+1);

   for (int i = 1; i <= n; i++){
      cin >> V[i];
   }

   Tnode A(1, n, V);

   int a;
   while (q--){
      cin >> a;
      // A.upd(a, n);
      cout << A.ans << endl;
   }


   return 0;
}
