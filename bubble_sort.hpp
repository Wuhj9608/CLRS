//
// Created by frank1in on 11/8/17.
//

#ifndef CLRS_BUBBLE_SORT_HPP
#define CLRS_BUBBLE_SORT_HPP

#include <array>
#include "base.hpp"

void bubble_sort(std::array<int, length> &a) {
  for (int i = 0; i < a.size() - 1; ++i) {
    for (int j = i + 1; j < a.size(); ++j) {
      if (a[i] > a[j]) {
        int t = a[i];
        a[i] = a[j];
        a[j] = t;
      }
    }
  }
}

#endif //CLRS_BUBBLE_SORT_HPP
