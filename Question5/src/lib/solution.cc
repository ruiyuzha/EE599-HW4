#include "solution.h"

void Solution::HeapSort(vector<int> &input) {  
  priority_queue<int, vector<int>, greater<int> > pq;
  for(auto& it: input){
    pq.push(it);
  }
  input.clear();
  while(!pq.empty())  
  {
    input.push_back(pq.top());
    pq.pop();
  }   
}

void Solution::print_vector(vector<int> v){
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