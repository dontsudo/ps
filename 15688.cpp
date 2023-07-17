#include <iostream>
using namespace std;

int freq[2000005];

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, tmp;
  cin >> n; 
  for (int i = 0; i < n; i++) {
    cin >> tmp;
    freq[tmp + 1000000]++;
  }

  for (int i = 0; i <= 2000000; i++) 
    for (int j = 0; j < freq[i]; j++) 
      cout << i - 1000000 << '\n';
}
