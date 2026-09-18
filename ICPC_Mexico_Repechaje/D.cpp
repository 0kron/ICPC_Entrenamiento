
#include <bits/stdc++.h>
#define endl "\n"

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> paii;
typedef vector<int> vi;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);

   int n, k; cin >> n >> k;
   int a[n+1];

   a[0] = -1;
   for (int i = 1; i < n+1; i++) cin >> a[i];
   sort(a, a+n+1);
   
   int i = 0;
   while (i < n){
      if (a[i+1] - a[i] > 1){
         if (k < 1) break;
         k--;
         a[i + 1] = a[i] + 1;
      }
      i++;
      // cout << a[i] << ' ' << k << ' ' << endl;
   }

   cout << a[i]+1 <<endl;

   return 0;
}
