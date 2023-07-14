#include <iostream>
#include <stack>
#include <vector>
using namespace std;

#define ll long long

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  ll n, res = 0; cin >> n;
  
  stack<ll> positions;
  vector<ll> h(n);
  for (int i = 0; i < n; i++)
    cin >> h[i];

  for (int i = 0; i < n; i++) {
    while (
      positions.size() > 0 &&
      h[i] >= h[positions.top()] 
    ) {
      positions.pop();
    }
    positions.push(i);
    res += positions.size();
  }

  cout << res << '\n';
}

