#include <iostream>
#include <string>
using namespace std;

const int MX = 10005;
int dat[2*MX + 1];
int head = MX, tail = MX;

void push_front(int x) {
  head--;
  dat[head] = x;
}

void push_back(int x) {
  dat[tail] = x;
  tail++;
}

void pop_front() {
  head++;
}

void pop_back() {
  tail--;
}

int size() {
  return tail - head;
}


int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int N; 
  cin >> N;

  while (N--) {
    string query;
    cin >> query; 

    int arg;
    if (query == "push_front") {
      cin >> arg; 
      push_front(arg);
    }
    else if (query == "push_back") {
      cin >> arg;
      push_back(arg);
    }
    else if (query == "pop_front") {
      if (head == tail) 
        cout << -1 << '\n';
      else {
        cout << dat[head] << '\n';
        pop_front();
      }
    }
    else if (query == "pop_back") {
      if (head == tail)
        cout << -1 << '\n';
      else {
        cout << dat[tail - 1] << '\n';
        pop_back();
      }
    }
    else if (query == "size") {
      cout << size() << '\n';
    }
    else if (query == "empty") {
      cout << (size() == 0 ? 1 : 0) << '\n';
    }
    else if (query == "front") {
      if (head == tail)
        cout << -1 << '\n';
      else
        cout << dat[head] << '\n';
    }
    else if (query == "back") {
      if (head == tail)
        cout << -1 << '\n';
      else
        cout << dat[tail - 1] << '\n';
    }
  }
}

