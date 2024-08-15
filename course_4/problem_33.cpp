#include <iostream>
#include <math.h>
using namespace std;

/**
Problem:
Write a program to ask the user to enter:
• Grade
Then print the grade as follows:
• 90 – 100 Print A
• 80 – 89 Print B
• 70 – 79 Print C
• 60 – 69 Print D
• 50 – 59 Print E
• Otherwise Print F
Example Inputs:
95
Outputs
A
 */

// My solution

int getGrade()
{
    int Grade;

    cout << "Please enter your Grade?" << endl;
    cin >> Grade;

    return Grade;
}

char getStatus(int Grade)
{
    switch (Grade / 10)
    {
        case 10:
        case 9:
            return 'A';
        case 8:
            return 'B';
        case 7:
            return 'C';
        case 6:
            return 'D';
        case 5:
            return 'E';
        default:
            return 'F';
    }
}

void printStatus(char Grade)
{
    cout << "Your Grade is: " << Grade << endl;
}

int main()
{
    int Grade = getGrade();

    printStatus(getStatus(Grade));

    return 0;
}

// PRO solution