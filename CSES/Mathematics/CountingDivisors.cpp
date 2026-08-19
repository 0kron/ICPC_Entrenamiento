#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> paii;
typedef vector<int> vi;

// Problem: Counting Divisors - CSES 
/*
* Fundamental Theorem of Arithmetic: Each int, has an unique prime factorization
* The idea is finding with no repetitions how many combinations can one make 
* with the prime factorization of a given name.
*
* What if we take the number of divisors of every number, as the devisors for 
* n will be inside p*n, with only one more divisor.
*
* For example if we take the cd[1] = 1.
* then as 1 | 2, then, cd[2] = 1 + cd[1]
* cd[3] = 2
* cd[4] = 1 + cd[2] 
*
* Then it may be efficient to as soon as a number is finded, it counts as a 
* divisor of each single one of its multiples.
*/

const int MAXN = 10e5;
int cd[MAXN];

void fillcd(int cd[]){
   for (int i = 1; i<= MAXN; i++)
      for (int j = i; j <= MAXN; j += i)
         cd[j]++; // each new multiple found is devisible by i
}

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n, x;

   fillcd(cd);

   cin >> n;
   while (n--){
      cin >> x;
      cout << cd[x] << "\n";
   }
   return 0;
}
