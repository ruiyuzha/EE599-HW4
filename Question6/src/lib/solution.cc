#include "solution.h"

int Solution::FindkthLargest(const vector<int> &input, int k) { 
  if (k<=0 ||k>input.size()){
    return -1;
  }
  else{
    priority_queue<int> pq;
    for(auto it: input){
      pq.push(it);
  }
    for(int i = 1; i < k; i++){
      pq.pop();
  }
  return pq.top();
  }
}

void Solution::print_vector(vector<int> v){
    if(v.size()>0){
        cout<<"[";
        for(int i=0;i<int(v.size());i++){
            cout<<v[i]<<",";  
        }
        cout<<"\b]";
    }
    else{
        cout<<"[]";
    }
}