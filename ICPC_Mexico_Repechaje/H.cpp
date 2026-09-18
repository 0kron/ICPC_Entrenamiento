#include <bits/stdc++.h>
#define endl "\n"

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> paii;
typedef vector<int> vi;

// Problem: H - ICPC Repechaje

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);

   int n; cin >> n;
   int a = 1<<30, b = 0, aux;

   while (n--){
      cin >> aux;
      a = min(a, aux);
      b = max(b, aux);
   }

   cout << b - a << endl;


   return 0;
}
