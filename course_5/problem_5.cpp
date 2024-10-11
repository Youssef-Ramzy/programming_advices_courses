#include <iostream>
using namespace std;

/**
 * Problem # 5/2
 * Write a program to read a number and print it in a reversed order.
Input:
1234
Output:
4
3
2
1
 */

// My solution

int ReadInput(string Message)
{
    int num;

    cout << Message;
    cin >>num;

    return num;
}

void NumDivider(int Num)
{
    do
    {
        cout << Num % 10 << endl;
        Num = Num / 10;
    } while (Num > 0);
}

int main()
{
    int Num = ReadInput("Enter the numbers: ");

    NumDivider(Num);

    return 0;
}

// PRO solution

