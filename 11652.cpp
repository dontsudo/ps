#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

ll a[100005];

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n; 
  cin >> n;

  for (int i = 0; i < n; i++) 
    cin >> a[i];

  sort(a, a + n);

  int cnt = 0, mxcnt = 0;
  ll mxval = -(1ll << 62) - 1;

  for (int i = 0; i < n; i++) {
    if (i == 0 || a[i - 1] == a[i]) 
      cnt++;
    else {
      if (cnt > mxcnt) {
        mxcnt = cnt;
        mxval = a[i - 1];
      }
      cnt = 1;
    }
  }

  if (cnt > mxcnt) mxval = a[n-1];
  cout << mxval;
}

