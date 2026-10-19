#include <bits/stdc++.h>
#define end "\n"

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> paii;
typedef vector<int> vi;

// Problem: Concert Tickets - CSES
/*
* As the order is relevant for this solution, and we have no guarantee on how
* are the offers the customers will make price wise, then, we can use a
* structure that is dinamic and saves them. There are two obvious options, 
* a set of pairs (to distinct between different tickets with the same price), or
* a multiset.
*/

multiset<int> tickets;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n, m, aux, i;
   int t; // current client
   cin >> n >> m;
   for (i = 0; i < n; i++){
        cin >> aux;
        tickets.insert(aux);
   }
   for (i = 0; i < m; i++){
      cin >> t;
      auto match = tickets.lower_bound(t+1); // first element greater or equal
      // using upper_bound:
      // auto match = tickets.upper_bound(t); // and would work the same
      if (match == tickets.begin()) cout << -1 << end;
      else {
         match--;
         cout << *match << end;
         tickets.erase(match);
      }
   }

   return 0;
}
