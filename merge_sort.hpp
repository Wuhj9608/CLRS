//
// Created by frank1in on 11/10/17.
//

/*
 * 时间复杂度为 nlgn
 */

#ifndef CLRS_MERGE_SORT_HPP
#define CLRS_MERGE_SORT_HPP

#include <array>
#include "base.hpp"

#include <iostream>

void merge(std::array<int, length> &A, int p, int q, int r) {
  int n1 = q - p;
  int n2 = r - q;
  int L[n1];
  int R[n2];

  for (int i = 0; i < n1; ++i) {
    L[i] = A[p + i];
  }
  for (int i = 0; i < n2; ++i) {
    R[i] = A[q + i];
  }

  int i = 0, j = 0;

  for (int k = p; k < r; ++k) {
    if (j >= n2) {
      A[k] = L[i];
      ++i;
      continue;
    }
    if (i >= n1) {
      A[k] = R[j];
      ++j;
      continue;
    }
    if (L[i] <= R[j]) {
      A[k] = L[i];
      ++i;
    } else {
      A[k] = R[j];
      ++j;
    }
  }
}

void merge_sort(std::array<int, length> &A, int p, int r) {
  if (p < r - 1) {
    int q = (p + r + 1) / 2;
    merge_sort(A, p, q);
    merge_sort(A, q, r);
    merge(A, p, q, r);
  }
}

#endif //CLRS_MERGE_SORT_HPP
