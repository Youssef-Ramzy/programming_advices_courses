#include <iostream>
#include "header_files/math_lib.h"
using namespace std;

int main()
{
    cout << "1 + 2 = " << math_lib::Sum2Numbers(1, 2) << endl;
    cout << "3 * 4 = " << math_lib::Multiply2Numbers(3, 4) << endl;
    cout << "5 - 2 = " << math_lib::Subtract2Numbers(5, 2) << endl;
    cout << "8 / 2 = " << math_lib::Divide2Numbers(8, 2) << endl;

    return 0;
}