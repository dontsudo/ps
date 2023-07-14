#include <iostream>
#include <queue>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n; cin >> n;

  queue<int> deck; 
  for (int i = 1; i <= n; i++) 
    deck.push(i);

  while (deck.size() > 1) {
    deck.pop();

    int card = deck.front();
    deck.pop();

    deck.push(card);
  }

  cout << deck.front() << '\n';
}


