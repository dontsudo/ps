#include <iostream>
#include <queue>
using namespace std;

int board[501][501];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  int n, m; cin >> n >> m;

  for (int i = 0; i < n; i++) 
    for (int j = 0; j < m; j++) 
      cin >> board[i][j];

  int cnt = 0, max_area = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (board[i][j] == 0) continue;

      queue<pair<int, int>> q;
      q.push({i, j});
      board[i][j] = 0; cnt++;

      int area = 0;
      while (!q.empty()) {
        auto curr = q.front(); q.pop();
        area++;

        for (int dir = 0; dir < 4; dir++) {
          int nx = curr.first + dx[dir];
          int ny = curr.second + dy[dir];

          if (
            nx < 0 || nx >= n || ny < 0 || ny >= m ||
            board[nx][ny] == 0
          )
            continue;

          board[nx][ny] = 0;
          q.push({nx, ny});
        }
      }
      max_area = max(max_area, area);
    }
  }

  cout << cnt << '\n' << max_area << '\n';
}


