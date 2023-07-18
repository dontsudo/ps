#include <iostream>
#include <algorithm>
using namespace std;

int a[100005];

//       s e
// 1 2 3 4 5
//       m

int binsearch(int* arr, int n, int t) {
  int st = 0, en = n - 1, mid;

  while (st <= en) {
    mid = (st + en) / 2;
    if (arr[mid] > t) 
      en = mid - 1;
    else if (arr[mid] < t) 
      st = mid + 1;
    else
      return mid;
  }

  return -1;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n, m, t;
  cin >> n;

  for (int i = 0; i < n; i++) 
    cin >> a[i];

  sort(a, a + n);

  cin >> m;
  for (int i = 0; i < m; i++) {
    cin >> t;
    cout << (binsearch(a, n, t) > -1 ? 1 : 0) << '\n';
  }
}


