#include <iostream>
using namespace std;

int m, n, k; 

int board[52][52];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

void dfs(int x, int y) {
  if (board[x][y] == 0) 
    return;

  board[x][y] = 0;

  for (int dir = 0; dir < 4; dir++) {
    int nx = x + dx[dir]; 
    int ny = y + dy[dir];

    if (
      0 > nx || nx >= n || 0 > ny || ny >= m ||
      board[nx][ny] == 0
    )
      continue;

    dfs(nx, ny);
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t; 

  while (t--) {
    int cnt = 0;
    cin >> m >> n >> k;

    for (int i = 0; i < n; i++)
      fill(board[i], board[i] + m, 0);

    for (int i = 0; i < k; i++) {
      int x, y; 
      cin >> y >> x;
      board[x][y] = 1;
    }

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (board[i][j] == 1) {
          dfs(i, j);
          cnt++;
        }
      }
    }
    cout << cnt << '\n';
  }
}

