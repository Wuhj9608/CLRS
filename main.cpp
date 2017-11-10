#include <iostream>
#include "insertion_sort.hpp"
#include "bubble_sort.hpp"
#include "merge_sort.hpp"
#include "quick_sort.hpp"
#include "base.hpp"
#include <random>
#include <array>

void print_array(std::array<int, length> a) {
  for (int i = 0; i < length / 10; ++i) {
    for (int j = 0; j < 10; ++j) {
      printf("%6d ", a[i * 10 + j]);
    }
    std::cout << std::endl;
  }
}

int main() {
  std::array<int, length> a;
  //void (*pointer_sort_function) (std::array a);
  for (int i = 0; i < length; ++i) {
    a[i] = rand() % 100000;
  }

  std::array b(a);
  bubble_sort(b);
  std::array c(a);
  quick_sort(c, 0, c.size());
  /*
  print_array(a);
  print_array(b);
  print_array(c);
   */
  std::cout << "c == b: " << (c == b) << std::endl;

  return 0;
}