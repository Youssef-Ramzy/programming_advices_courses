#include <iostream>
#include <math.h>
using namespace std;

/**
Problem:
Write a program to read a NumberOfHours and calculates the number of weeks,
and days included in that number
Input
365
Outputs
2.17 Weeks
15.20 Days
 */

// My solution

float ReadPositiveNumber(string Message)
{
    float Number;

    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

float HoursToWeeks(float Hours)
{
    return (Hours / 24) / 7.0;
}

float HoursToDays(float Hours)
{
    return (Hours / 24.0);
}

int main()
{
    float Hours = ReadPositiveNumber("Enter the Hours?");

    cout << HoursToWeeks(Hours) << " Weeks" << endl;
    cout << HoursToDays(Hours) << " Days" << endl;

    return 0;
}

// PRO solution

float ReadPositiveNumber(string Message)
{
    float Number;

    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

float hoursToDays(float NuberOfHours)
{
    return (float)NumberOfHours/24;
}

float HoursToWeeks(float NumberOfHours)
{
    return NumberOfHours/24/7;
}

float DaysToWeeks(float NumberOfDays)
{
    return NumberOfDays/7;
}

int main()
{
    float NumberOfHours = ReadPositiveNumber("Please enter NumberOfHours?");
    float NumberOfDays = HoursToDays(NuberOfHours);
    float NumberOfWeeks = DaysToWeeks(NumberOfDays);

    cout << endl;
    cout << "Total Hours = " << NumbersOfHours << endl;
    cout << "Total Days = " << NumberOfDays << endl;
    cout << "Total Weeks = " << HoursToWeeks(NumberOfHours) << endl;

    return 0;
}
