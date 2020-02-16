#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(Test1, ReturnTest1) {
  Solution solution;
  vector<int> input={1,2,3,4};
  vector<int> actual = solution.Filter(input);
  vector<int> expected = {2,4};
  EXPECT_EQ(expected, actual);
}

TEST(Test2, ReturnTest2) {
  Solution solution;
  vector<int> input={1,2,3,4};
  vector<int> actual = solution.Map(input);
  vector<int> expected = {1,4,9,16};
  EXPECT_EQ(expected, actual);
}

TEST(Test3, ReturnTest3) {
  Solution solution;
  vector<int> input={1,2,3,4};
  int actual = solution.Reduce(input);
  int expected = 10;
  EXPECT_EQ(expected, actual);
}

TEST(EmptyTest1, EmptyReturnTest1) {
  Solution solution;
  vector<int> input={};
  vector<int> actual = solution.Filter(input);
  vector<int> expected = {};
  EXPECT_EQ(expected, actual);
}

TEST(EmptyTest2, EmptyReturnTest2) {
  Solution solution;
  vector<int> input={};
  vector<int> actual = solution.Map(input);
  vector<int> expected = {};
  EXPECT_EQ(expected, actual);
}

TEST(EmptyTest3, EmptyReturnTest3) {
  Solution solution;
  vector<int> input={};
  int actual = solution.Reduce(input);
  int expected = 0;
  EXPECT_EQ(expected, actual);
}