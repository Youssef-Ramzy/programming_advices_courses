#include <iostream>
#include "mylib.h"
using namespace std;

namespace mylib
{
    void Sepretor(void)
    {
        cout << "-----------------------------------------" << endl;
    }

    int ReadNumber()
    {
    int Num;

    cout << "Please enter a Number" << endl;
    cin >> Num;

    return Num;
    }

    int SumOfFour(int a, int b, int c, int d)
    {
        return (a + b + c + d);
    }

    void PrintNumbersFromTo(int N, int M)
    {
        if (N <= M)
        {
            cout << N << endl;
            PrintNumbersFromTo(N + 1, M);
            cout << "This is The exit of The " << N << "th func" << endl;
        }
    }

    void PrintNumbersToFrom(int N, int M)
    {
        if (N <= M)
        {
            PrintNumbersToFrom(N + 1, M);
            cout << N << endl;
        }
    }

    void PrintPowerOf(int N, int M)
    {
        int Result = 1;
        for (int i = 0; i < M; ++i)
            Result *= N;
        cout << N << "^" << M << " = " << Result << endl;
    }

    int MyPower(int Base, int Power)
    {
        if (Power == 0)
            return 1;
        else
            return Base * MyPower(Base, Power - 1);
    }
}