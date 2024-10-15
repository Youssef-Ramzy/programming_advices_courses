#include <iostream>
#include <string>
using namespace std;

/**
 * Problem:
 * Write a program to print random Small Letter, Capital
 * Letter, Special Character, and Digit in order.
 * i
 * G
 * $
 * 7
*/

enum enCharType { SmallLetters = 1, CapitalLetters = 2, SpecialChar = 3, Digits = 4 };

int RandomNumberGenerator(int From, int To) // Get this shit from chatgpt pro.
{
    int RandomNumber = rand() % (To - From + 1) + From;

    return RandomNumber;
}

char ReturnChar(enCharType CharType)
{
    switch (CharType)
    {
        case enCharType::SmallLetters:
            return static_cast<char>(RandomNumberGenerator(97, 122));
        case enCharType::CapitalLetters:
            return static_cast<char>(RandomNumberGenerator(65, 90));
        case enCharType::SpecialChar:
            return static_cast<char>(RandomNumberGenerator(33, 47));
        case enCharType::Digits:
            return static_cast<char>(RandomNumberGenerator(48, 57));
        default:
            return '\0'; // Handle invalid CharType
    }
}

void PrintResult(void)
{
    cout << ReturnChar(enCharType::SmallLetters) << endl;
    cout << ReturnChar(enCharType::CapitalLetters) << endl;
    cout << ReturnChar(enCharType::SpecialChar) << endl;
    cout << ReturnChar(enCharType::Digits) << endl;
}

int main()
{
    PrintResult();

    return 0;
}
