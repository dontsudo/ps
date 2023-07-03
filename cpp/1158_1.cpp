#include <iostream>
#include <vector>

using namespace std; 

int main() {
  int n, k;
  cin >> n >> k;

  vector<int> sequence;
  vector<int> people(n);

  for (int i = 0; i < n; i++) {
    people[i] = i + 1;
  }

  int i = 0;
  while (!people.empty()) {
    i = (i + k - 1) % people.size();
    sequence.push_back(people[i]);
    people.erase(people.begin() + i);
  }

  cout << "<";
  for (int i = 0; i < sequence.size(); i++) {
    cout << sequence[i];
    if (i != sequence.size() - 1) {
      cout << ", ";
    }
  }
  cout << ">";
}

