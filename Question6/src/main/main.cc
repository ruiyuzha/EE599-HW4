#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    vector<int> v1={0,2,1,5,6,3};
    int k1=2;
    int res1=solution.FindkthLargest(v1,k1);
    cout<<"Input: ";
    solution.print_vector(v1);
    cout<< " and k = "<<k1<<endl;
    cout<< "Output: "<<res1<<endl;

    vector<int> v2={-2, 3,-1,2,5,6,10};
    int k2=3;
    int res2=solution.FindkthLargest(v2,k2);
    cout<<"Input: ";
    solution.print_vector(v2);
    cout<< " and k = "<<k2<<endl;
    cout<< "Output: "<<res2<<endl;
    return EXIT_SUCCESS;
}