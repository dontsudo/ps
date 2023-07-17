#include <iostream>
#include <string>
#include <queue>
#include <vector>
#define X first
#define Y second
using namespace std;

const int MX = 1005 * 1005;
int n, m;

int dist[1005][1005];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void bfs(vector<string>& board) {
  queue<pair<int, int>> q;
  q.push({0, 0});
  dist[0][0] = 1;
  while (!q.empty()) {
    auto curr = q.front(); q.pop();
    for (int dir = 0; dir < 4; dir++) {
      int nx = curr.X + dx[dir];
      int ny = curr.Y + dy[dir];

      if (nx < 0 || nx >= n || ny < 0 || ny >= m) 
        continue;

      if (board[nx][ny] == '1' || dist[nx][ny] != 0)
        continue;

      q.push({nx, ny});
      dist[nx][ny] = dist[curr.X][curr.Y] + 1;
    }
  }
}

void reset_dist() {
  for (int i = 0; i < n; i++)
    fill(dist[i], dist[i] + m, 0);
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  cin >> n >> m;

  vector<string> board(n);
  for (int i = 0; i < n; i++) 
    cin >> board[i];

  int res = MX;

  bfs(board);

  if (dist[n - 1][m - 1] != 0)
    res = min(res, dist[n - 1][m - 1]);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (board[i][j] == 0) 
        continue;

      reset_dist();

      board[i][j] = '0';
      bfs(board);
      board[i][j] = '1';

      if (dist[n - 1][m - 1] != 0) 
        res = min(res, dist[n - 1][m - 1]);
    }
  }

  cout << (res == MX ? -1 : res) << '\n';
}



