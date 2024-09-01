#include <iostream>
#include <math.h>
using namespace std;

/**
Problem:
Write a program that inputs the number of seconds and changes it to days, hours, minutes, and secondsInput
193,535
Output 
2:5:45:35
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

float SecondsToDays(float Seconds)
{
    return (Seconds * 60 * 60 * 24);
}

int main()
{
    float Seconds = ReadPositiveNumber("Enter the Seconds?");

    int days = (int)(Seconds / (60 * 60 * 24));
    Seconds -= days * (60 * 60 * 24);

    int hours = (int)(Seconds / (60 * 60));
    Seconds -= hours * (60 * 60);

    int minutes = (int)(Seconds / 60);
    Seconds -= minutes * 60;

    cout << days << ":" << hours << ":" << minutes << ":" << Seconds << endl;
}

// PRO solution

struct strTaskDuration
{
    int NumberOfDays, NumberOfHours, NumberOfminutes, NumberOfSeconds;
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

strTaskDuration SecondsToTaskDuration(int TotalSeconds)
{
    strTaskDuration TaskDuration;
    
    const int SecondsPerDay = 24 * 60 * 60;
    const int Secondsperhour = 60 * 60;
    const int SecondsperMinute = 60;

    int Remainder = 0;
    TaskDuration.NumberOfDays = floor(TotalSeconds / SecondsPerDay);
    Remainder = TotalSeconds % SecondsPerDay;
    TaskDuration.NumberOfHours = floor(Remainder / Secondsperhour);
    Remainder %= Secondsperhour;
    TaskDuration.NumberOfminutes = floor(Remainder / SecondsperMinute);
    Remainder %= SecondsperMinute;
    TaskDuration.NumberOfSeconds = Remainder;

    return TaskDuration;
}

void PrintTaskDurationDetails(strTaskDuration TaskDuration)
{
    cout << TaskDuration.NumberOfDays << ":" << TaskDuration.NumberOfHours << ":" << TaskDuration.NumberOfminutes << ":" << TaskDuration.NumberOfSeconds << endl;
}

int main()
{
    int TotalSeconds = ReadPositiveNumber("Please Enter Total SEconds?");
    PrintTaskDurationDetails(SecondsToTaskDuration(TotalSeconds));

    return 0;
}
