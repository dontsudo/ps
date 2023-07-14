#include <iostream>
#include <string>
using namespace std;

class node {
public:
  char val;
  node *prev, *next;

  node(char c)
    : val(c), prev(nullptr), next(nullptr) {}
};

class editor {
public:
  node *head, *tail;
  node *cursor;

  editor()
    : head(nullptr), tail(nullptr), cursor(nullptr) {}

  void append(char c) {
    node *new_node = new node(c);
    if (head == nullptr) {
      head = tail = new_node;
    } else {
      if (cursor == nullptr) {
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
      } else {
        new_node->prev = cursor;
        new_node->next = cursor->next;
        if (cursor->next != nullptr) {
          cursor->next->prev = new_node;
        } else {
          tail = new_node;
        }
        cursor->next = new_node;
      }
    }
    cursor = new_node;
  }

  void remove() {
    if (cursor == nullptr) return;

    node *to_delete = cursor;

    if (cursor->prev) {
      cursor->prev->next = cursor->next;
    } else {
      head = cursor->next;
    }

    if (cursor->next) {
      cursor->next->prev = cursor->prev;
    } else {
      tail = cursor->prev;
    }

    cursor = cursor->prev;
    delete to_delete;
  }

  void move_cursor_left() {
    if (cursor != nullptr) {
      cursor = cursor->prev;
    }
  }
  
  void move_cursor_right() {
    if (cursor == nullptr) {
      cursor = head;
    } else if (cursor != nullptr && cursor->next != nullptr) {
      cursor = cursor->next;
    }
  }

  void display_text() {
    node *current = head;
    while (current != nullptr) {
      cout << current->val;
      current = current->next;
    }
    cout << endl;
  }
};
        
int main() {
  editor e;
  string s; cin >> s;
  for (char c : s) 
    e.append(c);

  char cmd, arg;
  int t; cin >> t;
  while (t--) {
    cin >> cmd;
    if (cmd == 'P') 
      cin >> arg;

    switch (cmd) {
    case 'L':
      e.move_cursor_left();
      break;
    case 'D':
      e.move_cursor_right();
      break;
    case 'B':
      e.remove();
      break;
    case 'P':
      e.append(arg);
      break;
    }
  }

  e.display_text();
}
