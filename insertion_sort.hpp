//
// Created by frank1in on 11/10/17.
//

#ifndef CLRS_INSERTION_SORT_HPP
#define CLRS_INSERTION_SORT_HPP

#include <array>
#include "base.hpp"

void insertion_sort(std::array<int, length> &a) {
  for (int i = 1; i < a.size(); ++i) {
    int key = a[i];
    int j = i - 1;
    while (j >= 0 && a[j] > key) {
      a[j + 1] = a[j];
      --j;
    }
    a[j + 1] = key;
  }
}

#endif //CLRS_INSERTION_SORT_HPP
