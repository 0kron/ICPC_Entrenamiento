#include <bits/stdc++.h>
#define endl "\n"

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> paii;
typedef vector<int> vi;

// Problem: L - ICPC 

string intersection(string a, string b){
   int n = min(a.length(), b.length());
   string res = "";
   for (int i = 0; i < n && a[i] == b[i]; i++){
      res += a[i];
   }
   return res;
}

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);

   int n; cin >> n;
   vector<string> k(29, " ");
   string act;

   while(n--){
      cin >> act;
      if (k[act[0]] == " ") k[act[0]] = act;
      else k[act[0]] = intersection(k[act[0]], act);
   }

   int m = 0;
   for (string w : k){
      m = max(m, (int) w.length());
   }

   cout << m << endl;


   return 0;
}
