#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(Test, ReturnTest) {
  Solution solution;
  vector<int> v1={0,2,1,5,6,3};
  int k1=2;
  int actual=solution.FindkthLargest(v1,k1);
  EXPECT_EQ(5, actual);
}

TEST(Test1, ReturnTest1) {
  Solution solution;
  vector<int> v1={0,2,1,5,6,3};
  int k1=0;
  int actual=solution.FindkthLargest(v1,k1);
  EXPECT_EQ(-1, actual);
}

TEST(Test2, ReturnTest2) {
  Solution solution;
  vector<int> v1={0,2,1,5,6,3};
  int k1=10;
  int actual=solution.FindkthLargest(v1,k1);
  EXPECT_EQ(-1, actual);
}