#include <iostream>
#include "src/lib/BST.h"
using namespace std;

int main()
{
    vector<int> init = {10, 12, 5, 4, 20, 8, 7, 15, 13};
    BST solution(init);
    cout << "Input: ";
    solution.inorder();
    cout << "Find (4), res is:";
    solution.find(4)? cout << "Yes" << endl:
                      cout << "No" << endl;

    solution.push(9);
    cout<< "Push (9), res is: ";
    solution.inorder();

    cout<<"Erase (8), res is: ";
    solution.erase(8)? cout << "Yes" << endl:
                      cout << "No" << endl;
    return EXIT_SUCCESS;
}