#include <bits/stdc++.h>
#define endl "\n"

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> paii;
typedef vector<int> vi;

// Problem: Movie Festival - CSES 
/*
* This is the Interval Scheduling Problem, a famous greedy algorithm, the idea
* is the following: Sort the time intervals by their ending time, and select 
* select the first ones in ascending order that start at most the current ending
* time.
*
* Thus, there is need to create our own comparison, and the greedy is to select
* firstly the movie (interval) that ends the sooner. And do the same for every
* interval stored.
*/


bool comp(paii a, paii b){
   return a.second < b.second;
}

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);

   int n, i;
   cin >> n;
   vector<paii> interval(n);

   for (i = 0; i < n; i++)
      cin >> interval[i].first >> interval[i].second;

   sort(interval.begin(), interval.end(), comp);

   int cend = -1, count = 0; i = 0;

   while (i < n){
      if (cend <= interval[i].first){
         count++;
         cend = interval[i].second;
      }
      i++;
   }

   cout << count << endl;

   return 0;
}
