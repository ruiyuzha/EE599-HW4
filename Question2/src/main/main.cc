#include <iostream>
#include "src/lib/MaxHeap.h"
using namespace std;

int main()
{
    MaxHeap h;
    h.push(8);
    h.push(3);
    h.push(10);
    h.push(1);
    cout<<"Input MaxHeap: ";
    vector<int> res = h.print_heap();

    cout << "Index of Parent node: " << h.GetParentIndex(1) << endl;
    cout << "Value of Parent node: " <<h.GetParent(1) << endl;
    cout << "Index of Left node: " << h.GetLeftIndex(0) << endl;
    cout << "Value of Left node: " <<h.GetLeft(0) << std::endl;
    cout << "Index of Right node: " << h.GetRightIndex(0) << std::endl;
    cout << "Value of Right node: " <<h.GetRight(0) << std::endl;
    cout << "Index of Largest child node: " << h.GetLargestChildIndex(0) << std::endl;
    cout << "Value of Top node: " <<h.top() << std::endl;
    
    h.pop();
    cout << "MaxHeap after pop: ";
    h.print_heap();

    return EXIT_SUCCESS;
}