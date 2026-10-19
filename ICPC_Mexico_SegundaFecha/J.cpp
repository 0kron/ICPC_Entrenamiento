#include <bits/stdc++.h>
#include <queue>
#define end "\n"

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> paii;
typedef vector<int> vi;

int const MAXN = 1e5 +2;
vector<vector<paii>> g(MAXN);

ll dist[MAXN];
ll a_dist[MAXN];

void dijkstra(int x, ll dist[], int sz){
   memset(dist, -1, sz);
   priority_queue<pair<ll, int>> q;
   dist[x] = 0; q.push({0, x});
   while(!q.empty()){
      x = q.top().second;
      ll c = -q.top().first;
      q.pop();
      if(dist[x] != c) continue;
      for (int i = 0; i < g[x].size(); i++){
         if (g[x][i].first == x) continue;
         int y = g[x][i].first; ll c = g[x][i].second;
         if (dist[y] < 0 || dist[x] + c < dist[y]){
            dist[y] = dist[x] + c;
            q.push({-dist[y], y});
         }
      }
   }
}


int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);

   int n, m, a, b; cin >> n >> m >> a >> b;

   int j, izq, der, init, incr;
   for (int i = 0; i<m; i++){
      cin >> j >> izq >> der >> init >> incr;
      for (int k = 0; k<=(der-izq); k++){
         g[j].push_back({izq + k, init + incr*k});
      }
   }

   dijkstra(1, dist, sizeof(dist));
   dist[0] = 0;

    // cout << "-------------------" << endl;
    // for (int i = 1; i <= n; i++)
    //    cout << i << ' ' << dist[i] << endl;
    // cout << "-------------------" << endl;

   if (dist[a] == -1 || dist[b] == -1){
      cout << -1 << endl; return 0;
   }

   if (a == b){
      cout << dist[a] << endl;
      return 0;
   }
   else if (dist[a] < dist[b]){
      dijkstra(a, a_dist, sizeof(a_dist));
      if (a_dist[b] + dist[a] <= dist[b]){
         cout << dist[b] << endl;
      }
      else {
         cout << dist[a] + dist[b] << endl;
      }
   }
   else{ 
      dijkstra(b, a_dist, sizeof(a_dist));
      if (a_dist[a] + dist[b] <= dist[a]){
         cout << dist[a] << endl;
      }
      else {
         cout << dist[a] + dist[b] << endl;
      }
   }


   return 0;
}
