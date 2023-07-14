#include <iostream>
#include <stack>
using namespace std; 

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  int n, cnt = 0;
  cin >> n;

  stack<ll> S;

  for (int i = 0; i < n; i++) {
    int h; 
    cin >> h; 

    cnt += S.size();
    while (!S.empty() && S.top() < h) 
      S.pop();

    S.push(h);
  }

  cout << cnt << '\n';
}
