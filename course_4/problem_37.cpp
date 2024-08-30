#include <iostream>
#include <math.h>
using namespace std;

/**
Write a program to read numbers from user and sum them,
keep reading until the user enters -99 then print the Sum on screen.
Input
10
20
30
40
-99
Outputs
100
 */

// My solution

int main()
{
    int num;
    int sum = 0;

    do {
        cout << "Enter a number (-99 to exit): ";
        cin >> num;
        if (num != -99)
        {
            sum += num;
        }
    } while (num != -99);

    cout << "Sum: " << sum << endl;

    return 0;
}

// PRO solution

float ReadNumber(string Message)
{
    float Number = 0;
    cout << Message << endl;
    cin >> Number;

    return Number;
}

float SumNubers()
{
    int Sum = 0, Number = 0, Counter = 1;

    do
    {
        Number = ReadNumber("Please enter Nuber " + to_string(Counter));
        if (Number == -99)
            break;
        Sum += Number;
        Counter++;
    } while (Number != -99);
}

int main()
{
    cout << endl << "Result = " << SumNubers() << endl;

    return 0;
}