#include "solution.h"
using namespace std;

//O(n)
void Solution::print_vector(const vector<int> &v){
    if(v.size()>0){
        cout<<"{";
        for(int i=0;i<int(v.size());i++){
            cout<<v[i]<<",";  
        }
        cout<<"\b}";
    }
    else{
        cout<<"{}";
    }
    cout<<endl;
}

//O(n)
vector<int> Solution::Filter(vector<int> input){
  vector<int> v(input.size());
  auto it = copy_if(input.begin(), input.end(), v.begin(), [](int i){return (i%2==0);});
  v.resize(distance(v.begin(), it));
  return v;
}

//O(n)
vector<int> Solution::Map(vector<int> in){
  vector<int> out(in.size());
  transform(in.begin(), in.end(), out.begin(), [](int i){return i * i;});
  return out;
}

//O(n)
int Solution::Reduce(vector<int> in){
  int initial_sum=0;
  int sum = accumulate(in.begin(), in.end(), initial_sum);
  return sum;
}
