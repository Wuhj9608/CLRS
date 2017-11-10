//
// Created by frank1in on 11/10/17.
//

#ifndef CLRS_QUICK_SORT_HPP
#define CLRS_QUICK_SORT_HPP

/*
 * 最坏时间复杂度为 n^2
 * 期望时间复杂度为 nlgn
 *
 * 原址排序
 */

#include <array>
#include "base.hpp"

int partition(std::array<int, length> &A, int p, int r) {
  int pivot_element = A[r - 1];
  int i = p - 1;
  for (int j = p; j < r - 1; ++j) {
    if (A[j] < pivot_element) {
      ++i;
      int t = A[i];
      A[i] = A[j];
      A[j] = t;
    }
  }
  int t = A[i + 1];
  A[i + 1] = A[r - 1];
  A[r - 1] = t;

  return i + 1;
}

void quick_sort(std::array<int, length> &A, int p, int r) {
  if (p < r - 1) {
    int q = partition(A, p, r);
    quick_sort(A, p, q);
    quick_sort(A, q + 1, r);
  }
}

#endif //CLRS_QUICK_SORT_HPP
