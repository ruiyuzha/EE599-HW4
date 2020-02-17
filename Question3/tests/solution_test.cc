#include "src/lib/BST.h"
#include "gtest/gtest.h"
#include <vector>

TEST(TestFind, ReturnTestFind) {
  vector<int> init = {10, 12, 5, 4, 20, 8, 7, 15, 13};
  BST solution(init);
  bool actual = solution.find(4);
  EXPECT_EQ(1, actual);
}

TEST(TestFindNot, ReturnTestFindNot) {
  vector<int> init = {10, 12, 5, 4, 20, 8, 7, 15, 13};
  BST solution(init);
  bool actual = solution.find(1);
  EXPECT_EQ(0, actual);
}

TEST(TestPush, ReturnTestPush) {
  vector<int> init = {10, 12, 5, 4, 20, 8, 7, 15, 13};
  BST solution(init);
  solution.push(9);
  bool actual = solution.find(9);
  EXPECT_EQ(1, actual);
}

TEST(TestErase, ReturnTestErase) {
  vector<int> init = {10, 12, 5, 4, 20, 8, 7, 15, 13};
  BST solution(init);
  bool actual = solution.erase(4);
  EXPECT_EQ(1, actual);
}

TEST(TestEraseNot, ReturnTestEraseNot) {
  vector<int> init = {10, 12, 5, 4, 20, 8, 7, 15, 13};
  BST solution(init);
  bool actual = solution.erase(3);
  EXPECT_EQ(0, actual);
}