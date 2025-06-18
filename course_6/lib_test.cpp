#include <iostream>
#include "header_files/math_lib.h"
using namespace std;
using namespace math_lib;

int main()
{
    cout << "1 + 2 = " << Sum2Numbers(1, 2) << endl;
    cout << "3 * 4 = " << Multiply2Numbers(3, 4) << endl;
    cout << "5 - 2 = " << Subtract2Numbers(5, 2) << endl;
    cout << "8 / 2 = " << Divide2Numbers(8, 2) << endl;

    return 0;
}