#include "MaxHeap.h"
using namespace std;

MaxHeap::MaxHeap(){
  data_ = {};
}

int MaxHeap::GetParentIndex(int i){
  if (i<0||i>data_.size()){
    return -1;
  }
  else{
    return (i-1)/2;
  }
}

int MaxHeap::GetLeftIndex(int i){
  if (i<0||i>data_.size()){
    return -1;
  }
  else{
    return (2*i+1);
  }
}

int MaxHeap::GetRightIndex(int i){
  if (i<0||i>data_.size()){
    return -1;
  }
  else{
    return (2*i+2);
  }
}

int MaxHeap::GetLargestChildIndex(int i){
  if(MaxHeap::GetLeftIndex(i)==-1 && MaxHeap::GetRightIndex(i)==-1){
    return -1;
  }
  if (MaxHeap::GetLeft(i) > MaxHeap::GetRight(i)){
    return MaxHeap::GetLeftIndex(i);
  }
  else{
    return MaxHeap::GetRightIndex(i);
  }
}


int MaxHeap::GetLeft(int i){
  if (MaxHeap::GetLeftIndex(i)<0){
    return -1;
  }
  return data_[MaxHeap::GetLeftIndex(i)];
}

int MaxHeap::GetRight(int i){
  if (MaxHeap::GetRightIndex(i)<0){
    return -1;
  }
  return data_[MaxHeap::GetRightIndex(i)];
}

int MaxHeap::GetParent(int i){
  if (MaxHeap::GetParentIndex(i)){
    return -1;
  }
  return data_[MaxHeap::GetParentIndex(i)];
}


int MaxHeap::top(){
  if(data_.size() == 0){
      return -1;
    }
  else{
      return data_[0];
  }
}

void MaxHeap::push(int v){
  data_.push_back(v);
  int i=(data_.size()-1);
  MaxHeap::TrickleUp(i);
}

void MaxHeap::pop(){
  data_[0] = data_[data_.size() - 1];   
  MaxHeap::TrickleDown(0);
  data_.pop_back();
}

void swap(int &x, int &y){
  int temp = x;
  x = y;
  y = temp;
}

void MaxHeap::TrickleUp(int i){
  while (i != 0 && MaxHeap::GetParent(i) < data_[i])
    {
        swap(data_[i], data_[MaxHeap::GetParentIndex(i)]);
        i = MaxHeap::GetParentIndex(i);
    }
}

void MaxHeap::TrickleDown(int i){
  while (i < data_.size() && data_[GetLargestChildIndex(i)] > data_[i])
    {
        swap(data_[MaxHeap::GetLargestChildIndex(i)],data_[i]);
        i = MaxHeap::GetLargestChildIndex(i);
    }
}

vector<int> MaxHeap::print_heap(){
  vector<int> out;
  if(data_.size()>0){
    cout<<"{";
    for(int i=0;i<int(data_.size());i++){
      out.push_back(data_[i]);
      cout<<data_[i]<<",";
      }
    cout<<"\b}";
  }
  else{
    cout<<"{}";
  }
  cout<<endl;
  return out;
}