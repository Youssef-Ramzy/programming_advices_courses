#include <iostream>
using namespace std;
int ReadNumber();

int main()
{
    int Num = ReadNumber();

    (Num >= 0) ? (Num == 0) ? cout << "Zero" << endl : cout << "Positive" << endl : cout << "Nigative" << endl;
}

int ReadNumber()
{
    int Num;

    cout << "Please enter a Number" << endl;
    cin >> Num;

    return Num;
}