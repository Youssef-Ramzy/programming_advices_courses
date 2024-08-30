#include <iostream>
#include <math.h>
using namespace std;

/**
Problem:
Write a program to ask the user to enter:
• Number1
• Number 2
• OperationType
Then perform the calculation according to the Operation Type as follows:
• “+” : add the two numbers.
• “-” : Subtract the two numbers.
• “*” : Multiply the two numbers.
• “/” : Divide the two numbers.
Example Inputs:
10
20
*
Outputs
200
 */

// My solution

// Function to get input from the user
void GetInput(int* Num1, int* Num2, char* Operation)
{
    cout << "Enter the number 1: ";
    cin >> *Num1; // Dereference the pointer to store the value
    cout << "Enter the number 2: ";
    cin >> *Num2; // Dereference the pointer to store the value
    cout << "Enter the Operation type (+, -, *, /): ";
    cin >> *Operation; // Dereference the pointer to store the value
}

// Function to perform the calculation based on the operation type
void CalcInput(int Num1, int Num2, char Operation)
{
    switch(Operation)
    {
        case '+':
            cout << "Result: " << Num1 + Num2 << endl;
            break;
        case '-':
            cout << "Result: " << Num1 - Num2 << endl;
            break;
        case '*':
            cout << "Result: " << Num1 * Num2 << endl;
            break;
        case '/':
            if (Num2 != 0)
                cout << "Result: " << Num1 / Num2 << endl;
            else
                cout << "Error: Division by zero!" << endl;
            break;
        default:
            cout << "Error: Invalid operation!" << endl;
            break;
    }
}

int main()
{
    int Num1, Num2;
    char Operation;

    GetInput(&Num1, &Num2, &Operation);
    CalcInput(Num1, Num2, Operation);

    return 0;
}

// PRO solution

enum enOperationType {Add = '+', Subtract = '-', Multiply = '*', Division = '/'};

float ReadNumber(string Message) // Generic function
{
    float Number = 0;
    cout << Message << endl;
    cin >> Number;

    return Number;
}

enOperationType ReadOpType()
{
    char OT = '+';

    cout << "Please enter Operation Type (+, -, *, /)?\n";
    cin >> OT;

    return (enOperationType)OT;
}

float Calculate(float Number1, float Number2, enOperationType OT)
{
    switch (OT)
    {
        case enOperationType::Add:
            return Number1 + Number2;
        case enOperationType::Subtract:
            return Number1 - Number2;
        case enOperationType::Multiply:
            return Number1 * Number2;
        case enOperationType::Divide:
            return Number1 / Number2;
        default:
            return Number1 + Number2;
    }
}

int main()
{
    float Number1 = ReadNumber("Please enter the first number?");
    float Number2 = ReadNumber("Please enter the second number?");

    enOperationType OT = ReadOpType();

    cout << endl << "Reslut = " << Calculate(Number1, Number2, OT) << endl;
}