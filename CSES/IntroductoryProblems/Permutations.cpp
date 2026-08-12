
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> paii;
typedef vector<int> vi;

// Problem: Permutations - CSES 
/*
* We need to give a consistent generation of permutations to qualify as 
* beautiful. Thus firts we need to make some valid sequences. 
*
* n = 1, the sequence "1" works.
* n = 2, there is "NO SOLUTION"
* n = 3, there is "NO SOLUTION"
* n = 4, "2 4 1 3", is solution while "1 3 2 4" is not.
* notice that its creation relies in counting first the even numbers so as to
* guarantee that the first number in the sequence of odd numbers (1), is not 
* adjacent to the last even number before n (n or n-1), and that can be 
* archieved only if n > 3. 
*/

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);

   int n; cin >> n;

   if (n > 1 && n < 4) cout << "NO SOLUTION\n";
   else {
      for (int i = 2; i <= n; i+=2) cout << i << " ";
      for (int i = 1; i <= n; i+=2) cout << i << " ";
      cout << "\n";
   }

   return 0;
}
