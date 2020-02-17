#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(TestHeapSort, ReturnTestHeapSort) {
  Solution solution;
  vector<int> input = {5, 9, 3, 1, 7};
  solution.HeapSort(input);
  vector<int> expected = {1,3,5,7,9};
  EXPECT_EQ(expected, input);
}