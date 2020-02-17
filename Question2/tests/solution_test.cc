#include "src/lib/MaxHeap.h"
#include "gtest/gtest.h"
#include <vector>

TEST(TestParent, ReturnTestParent) {
  MaxHeap h;
  h.push(8);
  h.push(3);
  h.push(10);
  h.push(1);
  int actual=h.GetParentIndex(1);
  EXPECT_EQ(0, actual);
}

TEST(TestLeft, ReturnTestLeft) {
  MaxHeap h;
  h.push(8);
  h.push(3);
  h.push(10);
  h.push(1);
  int actual=h.GetLeftIndex(0);
  EXPECT_EQ(1, actual);
}

TEST(TestRight, ReturnTestRight) {
  MaxHeap h;
  h.push(8);
  h.push(3);
  h.push(10);
  h.push(1);
  int actual=h.GetRightIndex(0);
  EXPECT_EQ(2, actual);
}

TEST(TestLargestChild, ReturnTestLargestChild) {
  MaxHeap h;
  h.push(8);
  h.push(3);
  h.push(10);
  h.push(1);
  int actual=h.GetLargestChildIndex(0);
  EXPECT_EQ(2, actual);
}

TEST(TestTop, ReturnTestTop) {
  MaxHeap h;
  h.push(8);
  h.push(3);
  h.push(10);
  h.push(1);
  int actual=h.top();
  EXPECT_EQ(10, actual);
}

TEST(TestPush, ReturnTestPush) {
  MaxHeap h;
  h.push(8);
  h.push(3);
  h.push(10);
  h.push(1);
  h.push(13);
  int actual=h.top();
  EXPECT_EQ(13, actual);
}

TEST(TestPop, ReturnTestPop) {
  MaxHeap h;
  h.push(8);
  h.push(3);
  h.push(10);
  h.push(1);
  h.pop();
  int actual=h.top();
  EXPECT_EQ(8, actual);
}