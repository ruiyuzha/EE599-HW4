#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

class Solution {
public:
  void print_vector(const vector<int> &v);
  vector<int> Filter(vector<int> input);
  vector<int> Map(vector<int> in);
  int Reduce(vector<int> in);
};

#endif