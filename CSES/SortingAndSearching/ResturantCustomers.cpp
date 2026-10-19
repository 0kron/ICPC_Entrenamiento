#include <bits/stdc++.h>
#define endl "\n"

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> paii;
typedef vector<int> vi;

// Problem: Resturant Customers - CSES 
/*
* The idea is that it does not matter who arrived at time a, and who leaved 
* at time b, only the arrivals and departures are what counts, so, we will 
* record them equally inside a vector of pairs (to distinct arrivals and 
* departures) and with that compute at any given moment, the current customers
* count.
*/

vector<paii> events;

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);

   int n, a, b, i, mx = 0, act = 0;
   cin >> n;
   i = n;

   while(i--){
      cin >> a >> b;
      events.push_back({a, 1}); // arrivals
      events.push_back({b, -1}); // departures
   }

   sort(events.begin(), events.end()); // lexicographic sorting

   for(int i = 0; i < 2*n; i++){
      act += events[i].second;
      mx = max(mx, act);
   }

   cout << mx;

   return 0;
}
