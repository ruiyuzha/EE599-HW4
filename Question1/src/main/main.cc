#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    vector<int> input={1,2,3,4,5,6,7,8,10};
    cout<<"Input: ";
    solution.print_vector(input);
    cout<<"Result of Filter: ";
    vector<int> v1=solution.Filter(input);
    solution.print_vector(v1);
    cout<<"Result of Map: ";
    vector<int> v2=solution.Map(input);
    solution.print_vector(v2);
    cout<<"Result of Reduce: ";
    int sum=solution.Reduce(input);
    cout<<sum<<endl;

    return EXIT_SUCCESS;
}