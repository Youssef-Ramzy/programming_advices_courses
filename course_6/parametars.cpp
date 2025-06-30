#include <iostream>
#include "mylib.h"
using namespace std;
using namespace mylib;

int main()
{
    cout << SumOfFour(3, 2) << endl;
    cout << SumOfFour(3, 2, 5) << endl;
    cout << SumOfFour(3, 2, 5, 5) << endl;

    return 0;
}