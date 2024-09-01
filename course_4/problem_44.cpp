#include <iostream>
#include <math.h>
using namespace std;

/**
Problem:
Write a program to ask the user to enter:
• Day
Then print the day as follows:
• 1 Print Sunday
• 2 Print Monday
• 3 Print Tuesday
• 4 Print Wednesday
• 5 Print Thursday
• 6 Print Friday
• 7 Print Saturday
• Otherwise print “Wrong Day” and ask the use to enter the day again.
Example Inputs:
6
Outputs
Its Friday
 */

// My solution

int main();
enum enDays { Sunday=1, Monday=2, Tuesday=3, Wednesday=4, Thursday=5, Friday=6, Saturday=7 };

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

void PrintResult(int Day)
{
    switch (Day)
    {
        case enDays::Sunday:
            cout << "Its Sunday" << endl;
            break;
        case enDays::Monday:
            cout << "Its Monday" << endl;
            break;
        case enDays::Tuesday:
            cout << "Its Tuesday" << endl;
            break;
        case enDays::Wednesday:
            cout << "Its Wednesday" << endl;
            break;
        case enDays::Thursday:
            cout << "Its Thursday" << endl;
            break;
        case enDays::Friday:
            cout << "Its Friday" << endl;
            break;
        case enDays::Saturday:
            cout << "Its Saturday" << endl;
            break;
        default:
            cout << "Wrong Day" << endl;
            main();
    }
}

int main()
{
    int Day = (int)ReadPositiveNumber("Enter the day number");

    PrintResult(Day);

    return 0;
}

// PRO solution

enum enDayOfWeek { Sat = 1, Sun = 2, Mon = 3, Tue = 4, Wed = 5, Thu = 6, Fri = 7 };

int ReadNumberInRange(String Message, int From, int To)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number < From || Number > To);

    return Number;
}

enDayOfWeek ReadDayOfWeek()
{
    return (enDayOfWeek)ReadNumberInRange("Please enter day number?", 1, 7);
}

string GetDayOfWeek(enDayOfWeek Day)
{
    switch (Day)
    {
        case enDayOfWeek::Sun:
            return "Sunday";
        case enDayOfWeek::Mon:
            return "Monday";
        case enDayOfWeek::Tue:
            return "Tuesday";
        case enDayOfWeek::Wed:
            return "Wednesday";
        case enDayOfWeek::Thu:
            return "Thursday";
        case enDayOfWeek::Fri:
            return "Friday";
        case enDayOfWeek::Sat:
            return "Saturday";
        default:
            return "Wrong Day";
    }
}

int main()
{
    cout << GetDayOfWeek(ReadDayOfWeek()) << endl;

    return 0;
}
