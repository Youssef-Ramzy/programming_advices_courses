#include <iostream>
#include "header_files/MyLib.h"
using namespace std;
using namespace MyLib;

int main()
{
    Test();
    cout << "1 + 2 = " << Sum2Numbers(1, 2) << endl;

    return 0;
}