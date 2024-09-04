#include <iostream>
#include <math.h>
using namespace std;

/**
Problem:
Write a program to read the ATM PIN code from the user, then check if PIN Code = 1234,
then show the balance to user, otherwise print “Wong PIN” and ask the user to enter the PIN again.
Only allow user to enter the PIN 3 times, if fails, print “Card is locked!”
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

bool CheckPinNumber(int Pin)
{
    if (Pin != 1234)
        return false;
    return true;
}

void PrintResult(void)
{
    int Count = 0;
    bool isPinCorrect = false;

    while (Count < 3 && !isPinCorrect)
    {
        int Pin = ReadPositiveNumber("Enter The Pin Number");
        isPinCorrect = CheckPinNumber(Pin);

        if (isPinCorrect)
        {
            cout << "Access Granted!" << endl;
        }
        else
        {
            cout << "Incorrect Pin. Try again." << endl;
            Count++;
        }
    }

    if (!isPinCorrect)
    {
        cout << "Access Denied. Too many incorrect attempts." << endl;
    }
}

int main(void)
{
    PrintResult();

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
    int Count = 3;

    do
    {
        Count--;
        PinCode = REadPinCode();

        if (PinCode == "1234")
        {
            return true;
        }
        else
        {
            system("color 4F"); //turn screen to Red
            cout << "\nWrong PIN, you have " << Count << " More tries.\n";
        }
    } while (PinCode != "1234" && Count >= 1);

    reurn 0;
}

int main()
{
    if (Login())
    {
        system("color 2F"); //turn screen to green
        cout << "\nYour account balance is " << 7500 << '\n';
    }
    else
    {
        cout << "\nYour card blocked call the bank for help. \n";
    }

    return 0;
}