#include <iostream>
#include <queue>
#include <vector>
#include <unordered_map>
using namespace std;

int snake_or_ladder[105];
int dist[105];

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  int n, m, u, v;
  cin >> n >> m;
  for (int i = 0; i < n + m; i++) {
    cin >> u >> v;
    snake_or_ladder[u] = v;
  }

  fill(dist, dist + 105, -1);

  queue<int> q;
  q.push(1);
  dist[1] = 0;
  while (!q.empty()) {
    int prev = q.front(); q.pop();
    for (int d = 1; d <= 6; d++) {
      int cur = prev + d;

      if (cur > 100) continue;
      
      if (
        snake_or_ladder[cur] == 0 && 
        dist[cur] == -1
      ) {
        q.push(cur);
        dist[cur] = dist[prev] + 1;
      } 
      else if (
        snake_or_ladder[cur] != 0 && 
        dist[snake_or_ladder[cur]] == -1
      ) {
        q.push(snake_or_ladder[cur]);
        dist[snake_or_ladder[cur]] = dist[prev] + 1;
      }
    }
  }

  cout << dist[100] << '\n';
}

