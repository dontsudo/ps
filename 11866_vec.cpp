#include <iostream>
#include <vector>
using namespace std;

vector<int> josephus(int n, int k) {
  vector<int> permutation;
  vector<int> people;

  for (int i = 1; i <= n; i++) 
    people.push_back(i);

  int idx = 0;
  while (!people.empty()) {
    idx = (idx + k - 1) % people.size(); 
    permutation.push_back(people[idx]);

    people.erase(people.begin() + idx);
  }

  return permutation;
}

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> permutation = josephus(N, K);
  cout << "<";
  for (int i = 0; i < permutation.size(); i++) {
    cout << permutation[i];
    if (i != permutation.size() - 1) {
      cout << ", ";
    }
  }
  cout << ">";
}

