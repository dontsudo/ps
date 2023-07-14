#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>
using namespace std;
 
int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  int n;
  cin >> n; 

  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  unordered_map<int, int> NGE;
  stack<int> S;

  for (int i = n - 1; i >= 0; i--) {
    while (!S.empty() && S.top() <= a[i])
      S.pop();

    if (S.empty()) 
      NGE[i + 1] = -1;
    else 
      NGE[i + 1] = S.top();

    S.push(a[i]);
  }

  for (int i = 1; i <= n; i++) 
    cout << NGE[i] << ' ';
}
