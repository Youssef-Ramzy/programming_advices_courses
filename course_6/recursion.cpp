#include <iostream>
#include "mylib.h"
using namespace std;
using namespace mylib;

int main()
{
    PrintNumbersFromTo(1, 10);
    Sepretor();
    PrintNumbersToFrom(1, 10);
    Sepretor();
    PrintPowerOf(5, 5);
    Sepretor();
    cout << MyPower(2, 4) << endl;

    return 0;
}