#include <iostream>
#include "mylib.h"
using namespace std;
using namespace mylib;

int main()
{
    int Num = ReadNumber();

    (Num >= 0) ? (Num == 0) ? cout << "Zero" << endl : cout << "Positive" << endl : cout << "Nigative" << endl;
}
