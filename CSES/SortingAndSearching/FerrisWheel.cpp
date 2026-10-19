#include <bits/stdc++.h>
#define end "\n"

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> paii;
typedef vector<int> vi;

// Problem: Ferris Wheel - CSES 
/*
* There are n children to be placed in gondolas of maximum capacity x, and the
* task is to resolve how many gondolas do we need to place all the children.
*
* The idea is to make the most efficient matches, which is archieved by looking
* at the most and least yet unplaced wheights of children. So we will have a 
* double-end iteration. As it is guaranteed that every kid will fit in a gondola
* (p_i <= x), then, we know that for every iteration, heavy will decrease, and
* as there is a maximum of two children inside every gondola, then, light will
* only move if a light child fits.
*/

const int MAXN = 2e5 + 1;
int p[MAXN];

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);

   int n, x, aux;
   cin >> n >> x;
   for (int i = 0; i < n; i++){
      cin >> aux;
      p[i] = aux;
   }

   sort(p, p+n);
   int light = 0, heavy = n-1, count = 0;
   while (light <= heavy){
      if (p[light] + p[heavy] <= x) light++;
      heavy--;
      count++;
   }

   cout << count << end;

   return 0;
}
