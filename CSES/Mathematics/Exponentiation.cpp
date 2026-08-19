#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> paii;
typedef vector<int> vi;

// Problem: Exponentiation - CSES 
/*
* Efficiently calculate the values a^b modulo 10e9 + 7. With n calculations to
* make, with n-pairs of a and b.
*
* The algorithm Binary Exponentiation works on O(log(b)). Using the following
* intuition: a^b = (a^(b/2))^2. So then we divide the exponentiation into a 
* far simplier exponentiation, reducing with each step half of the steps left.
*/

const int MOD = 1e9 + 7;

int power(int a, int b){
   if (b == 0) return 1; 
   ll tmp = power(a, b / 2);
   ll result = ((tmp%MOD) * (tmp%MOD)) % MOD; // == (tmp * tmp) % MOD
   if (b % 2 == 1) result = ((result%MOD) * (a%MOD)) % MOD; // == (result * a) % MOD
   return (int) result;
}

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   int a, b;
   while (n--){
      cin >> a >> b;
      cout << power(a, b) << "\n";
   }
   return 0;
}
