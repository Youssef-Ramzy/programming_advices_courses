#include <iostream>
#include <math.h>
using namespace std;

/**
Problem:
Write a program to read the ATM PIN code from the user,
then check if PIN Code = 1234, then show the balance to user,
otherwise print “Wong PIN” and ask the user to enter the PIN again.
Assume User Balance is 7500.
Input
1234
5151
Outputs
Your Balance is: 7500
Wrong PIN
 */

// My solution

int ReadPositiveNumber(string Message)
{
    int Number;

    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number < 0);

    return Number;
}

void CheckPinNumber()
{
    int Pin = ReadPositiveNumber("Enter the pin number?");

    if (Pin == 1234)
        cout << "Your Balance is: 7500" << endl;
    else 
    {
        cout << "Wrong PIN" << endl;
        CheckPinNumber();
    }
}

int main(void)
{
    CheckPinNumber();

    return 0;
}

// PRO solution

string ReadPinCode()
{
    string PinCode;
    cout << "Please enter PIN code \n";
    cin >> PinCode;

    return PinCode;
}

bool Login()
{
    string PinCode;

    do
    {
        PinCode = REadPinCode();

        if (PinCode == "1234")
        {
            return true;
        }
        else
        {
            cout << "\nWrong PIN\n";
            system("color 4F"); //turn screen to Red
        }
    } while (PinCode != "1234");

    reurn 0;
}

int main()
{
    if (Login())
    {
        system("color 2F"); //turn screen to green
        cout << "\nYour account balance is " << 7500 << '\n';
    };

    return 0;
}