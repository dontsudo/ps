#include <iostream>
#include <unordered_map>
#include <vector>

int main() {
  std::unordered_map<int, std::vector<int>> map;

  // Populating the map
  map[1] = {3, 2, 1};
  map[2] = {5, 4, 3, 2, 1};

  // Sorting the vectors
  for(auto& pair : map) {
    std::sort(pair.second.begin(), pair.second.end());
  }

  // Printing the map
  for (const auto& pair : map) {
    std::cout << "Key: " << pair.first << " Values: ";
    for (const auto& val : pair.second) {
      std::cout << val << ' ';
    }
    std::cout << '\n';
  }

  return 0;
}

