#include <iostream>
#include <math.h>
using namespace std;

/**
Problem:
Write a program to calculate the task duration in seconds and print it on screen
 Given the time duration of a task in the number of days, hours, minutes, and seconds,.
Input
2
5
45
35
Outputs
193,535 Seconds
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

float CalcInSeconds(float Days, float Hours, float Minutes, float Seconds)
{
    return Seconds + (Minutes * 60.0) + (Hours * 60 * 60) + (Days * 24 * 60 * 60);
}

int main()
{
    float Days, Hours, Minutes, Seconds;

    Days = ReadPositiveNumber("Enter the Days?");
    Hours = ReadPositiveNumber("Enter the Hours?");
    Minutes = ReadPositiveNumber("Enter the Minutes?");
    Seconds = ReadPositiveNumber("Enter the Seconds?");

    cout << "The Total in Seconds is: " << CalcInSeconds(Days, Hours, Minutes, Seconds) << " In Seconds" << endl;

    return 0;
}

// PRO solution

struct strTaskDuration
{
    int NumberOfDays, NumberOfHours, NumberOfMinuts, NumberOfSeconds;
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

strTaskDuration ReadTaskDuration()
{
    strTaskDuration TaskDuration;
    TaskDuration.NumberOfDays = ReadPositiveNumber("Please Enter Number of Days?");
    TaskDuration.NumberOfHours = ReadPositiveNumber("Please Enter Number of Hours?");
    TaskDuration.NumberOfMinuts = ReadPositiveNumber("Please Enter Number of Minutes?");
    TaskDuration.NumberOfSeconds = ReadPositiveNumber("Please Enter Number of Seconds?");

    return TaskDuration;
}

int TaskDurationInSeconds(strTaskDuration TaskDuration)
{
    int DurationInSeconds = 0;

    DurationInSeconds += TaskDuration.NumberOfDays * 24 * 60 * 60;
    DurationInSeconds += TaskDuration.NumberOfHours * 60 * 60;
    DurationInSeconds += TaskDuration.NumberOfMinuts * 60;
    DurationInSeconds += TaskDuration.NumberOfSeconds;

    return DurationInSeconds;
}

int main()
{
    cout << "\nTask Duration In Seconds: " << TaskDurationInSeconds(ReadTaskDuration());
    cout << endl;

    return 0;
}
