#include <iostream>
#include <vector>
using namespace std;

int N, K, R = -1;

void merge(vector<int>& arr, int p, int q, int r) {
  int i = p, j = q + 1, t;
  vector<int> tmp;
  while (i <= q && j <= r) {
    if (arr[i] <= arr[j]) tmp.push_back(arr[i++]);
    else tmp.push_back(arr[j++]);
  }
  while (i <= q) tmp.push_back(arr[i++]);
  while (j <= r) tmp.push_back(arr[j++]);

  i = p, t = 0;
  while (i <= r) {
    arr[i] = tmp[t];
    K--;
    if (K == 0) R = arr[i];
    i++; t++;
  }
}

void merge_sort(vector<int>& arr, int p, int r) {
  if (p < r) {
    int q = (p + r) / 2;
    merge_sort(arr, p, q);
    merge_sort(arr, q + 1, r);
    merge(arr, p, q, r);
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> N >> K;

  vector<int> A(N);
  for (int i = 0; i < N; i++)
    cin >> A[i];

  merge_sort(A, 0, N - 1);

  cout << R << '\n';
}

