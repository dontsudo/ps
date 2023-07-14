#include <iostream>
#include <cstring>
using namespace std;

#define MAX 1000

int main() {
  bool prime[MAX+1];
  memset(prime, 1, MAX+1);
  prime[1] = false;

  for (int i = 2; i <= MAX; i++) 
    if (prime[i]) 
      for (int j = i * 2; j <= MAX; j += i) 
        prime[j] = false;

  int n, input, count = 0; cin >> n;
  while (n--) {
    cin >> input;
    if (prime[input]) count++;
  }
  cout << count << '\n';
}


