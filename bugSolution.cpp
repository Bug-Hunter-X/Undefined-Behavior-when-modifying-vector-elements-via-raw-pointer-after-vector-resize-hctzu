#include <iostream>
#include <vector>

int main() {
  std::vector<int> vec = {1, 2, 3};
  for (int& num : vec) { //Use iterators or array-like indexing
    num *= 2;
  }

  for (int num : vec) {
    std::cout << num << " ";
  }
  std::cout << std::endl;
  vec.push_back(4); 
  for (int num : vec) {
    std::cout << num << " ";
  }
  std::cout << std::endl;
  return 0;
}