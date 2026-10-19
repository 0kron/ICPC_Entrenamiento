#include <bits/stdc++.h>
#define end "\n"

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> paii;
typedef vector<int> vi;

// Problem: Stick Lengths - CSES 
/*
* The first reasoning would be to obtain the mean length and then pass through 
* the complete array and obtain the absolute difference to the mean value. How
* ever, it is completely possible to have a distorted or unbalanced array like
* the following:
* 3 4 4 4 4 4 4
*
* Clearly the mean idea will give an incorrect answer, as the int division will
* calculate the mean as 3, thus, we need another point, the median, as we 
* stand in the middle of the sorted array, and measuring how much each value
* differs from the median.
*/

const int MAXN = 1e9 + 1;
int p[MAXN];

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n, i; cin >> n; i = n;
   ll sum = 0, res = 0;

   for (int i = 0; i < n; i++)
      cin >> p[i];

   sort(p, p+n);
   for (int i = 0; i < n; i++){
      res += abs(p[i] - p[n/2]); 
   }

   cout << res << endl;

   return 0;
}
