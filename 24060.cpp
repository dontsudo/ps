#include <iostream>
#include <vector>
using namespace std;

void merge(
  vector<int>& a, 
  int p, 
  int q,
  int r
) {
  int i = p, j = q + 1, t = 1;
  vector<int> tmp(a.size());
  while (i <= q && j <= r) {
    if (a[i] <= a[j]) tmp[t++] = a[i++];
    else tmp[t++] = a[j++];
  }

  while (i <= q) tmp[t++] = a[i++];
  while (j <= r) tmp[t++] = a[j++];

  i = p; t = 1;
  while (i <= r) a[i++] = tmp[t++];
}

void merge_sort(
  vector<int>& a, 
  int p, 
  int r
) {
  if (p < r) {
    int q = (r + q) / 2;
    merge_sort(a, p, q);
    merge_sort(a, q + 1, r);
    merge(a, p, q, r);
  }
}

int main() {
  cin.tie(0); 
  ios::sync_with_stdio(0);

  int n, k;
  cin >> n >> k;

  vector<int> a(n);
  for (int i = 0; i < n; i++) 
    cin >> a[i];


}

