#include <iostream>
#include <math.h>
using namespace std;

/**
Problem:
Write a program to ask the user to enter:
• Month
Then print the day as follows:
• 1 Print January
• 2 Print February
• 3 Print March
• 4 Print April
• 5 Print May
• 6 Print June
• 7 Print July
• 8 Print August
• 9 Print September
• 10 Print October
• 11 Print November
• 12 December
• Otherwise print “Wrong Month” and ask the use to enter the Month again.
Example Inputs:
11
Outputs
November
 */

// My solution

int main();
enum enMonths {
    January=1,
    February=2,
    March=3,
    April=4,
    May=5,
    June=6,
    July=7,
    August=8,
    September=9,
    October=10,
    November=11,
    December=12
};

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

void PrintResult(int Month)
{
    switch (Month)
    {
        case January:
            cout << "January" << endl;
            break;
        case February:
            cout << "February" << endl;
            break;
        case March:
            cout << "March" << endl;
            break;
        case April:
            cout << "April" << endl;
            break;
        case May:
            cout << "May" << endl;
            break;
        case June:
            cout << "June" << endl;
            break;
        case July:
            cout << "July" << endl;
            break;
        case August:
            cout << "August" << endl;
            break;
        case September:
            cout << "September" << endl;
            break;
        case October:
            cout << "October" << endl;
            break;
        case November:
            cout << "November" << endl;
            break;
        case December:
            cout << "December" << endl;
            break;
        default:
            cout << "Wrong Month" << endl;
            main();
    }
}

int main()
{
    int Month = (int)ReadPositiveNumber("Enter the Month number");

    PrintResult(Month);

    return 0;
}

// PRO solution

enum enMonthOfYear { Jan = 1, Feb = 2, Mar = 3, Apr = 4, May = 5, Jun = 6, Jul = 7, Aug = 8, Spt = 9, Oct = 10, Nov = 11, Dec = 12 };

int ReadNumberInRange(string Message, int From, int To)
{
    int Number = 0;

    do
    {
        cout << "Enter the Month Number?" << endl;
        cin >> Number;
    } while (Number < From || Number > To);

    return Number;
}

enMonthOfYear ReadMonthOfYear()
{
    return (enMonthOfYear)ReadNumberInRange("Please enter The Month Number?"):
}

String GetMonthOfYear(enMonthOfYear Month)
{
    switch (Month)
    {
        case Jan:
            return "January";
        case Feb:
            return "February";
        case Mar:
            return "March";
        case Apr:
            return "April";
        case May:
            return "May";
        case Jun:
            return "June";
        case Jul:
            return "July";
        case Aug:
            return "August";
        case Spt:
            return "September";
        case Oct:
            return "October";
        case Nov:
            return "November";
        case Dec:
            return "December";
        default:
            return "Try again :)";
    }
}

int main()
{
    cout << GetMonthOfYear(ReadMonthOfYear()) << endl;

    return 0;
}