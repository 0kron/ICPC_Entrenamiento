
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> paii;
typedef vector<int> vi;

// Problem: Exponentiation II - CSES 
/*
* Efficiently calculate the values a^b^c modulo 10e9 + 7. With n calculations to
* make, with n-triplets of a, b and c.
*
* Comming from Exponiention (the previous exercise) we already have an 
* implementation of the Binary Exponentiation algorithm, now, the idea is to 
* generalize its use. First, notice the order of calculations: 
* a^b^c = a^(b^c) = a^x
*
* However, is it true to take the modulo of the exponentiator? 
*
* Fermat's Little Theorem: For all a integer non-divisible by p:
*           a^(p-1) % p = 1, equivalently a^p % p = a
*
* and in this case 1e9 + 7 is a prime number.
*
* Now, because a^(p-1)%p = 1, then, we only care about 
* how the exponent is moduloe (p-1), so lets say b^c = q (p-1) + r, and thus
* a^b^c = a^(q(p-1) + r) = a^(q(p-1)) * a^(r) = a^(p-1)^q * a^r = a^r mod p
*
* There fore, we only need to compute r = b ^ c mod (p-1)
*
* 
*/

const int MOD = 1e9 + 7;

int power(int x, int y, int m){
   if (y == 0) return 1; 
   ll tmp = power(x, y / 2, m);
   ll result = (tmp * tmp) % m;
   if (y % 2 == 1) result = ((result%m) * (x%m)) % m;
   return (int) result;
}

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   int a, b, c;
   while (n--){
      cin >> a >> b >> c;
      cout << power(a, power(b, c, MOD-1), MOD) << "\n";
   }
   return 0;
}
