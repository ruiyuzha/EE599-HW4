#include <iostream>
#include "src/lib/solution.h"
using namespace std;

int main()
{
    Solution solution ;
    vector<int> input = {5, 9, 3, 1, 7};
    cout<<"Input: ";
    solution.print_vector(input);
    solution.HeapSort(input);
    cout<<"Output: ";
    solution.print_vector(input);

    return EXIT_SUCCESS;
}