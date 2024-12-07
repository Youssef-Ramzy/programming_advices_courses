#include <iostream>
using namespace std;

/**
 * Problem: 21
 * Write a program to read how many keys to generate and print
 * them on the screen.
 * 5
 * EYI-HJUV-PEIP-CFRX
 * Key [1] : UMCO-YSPQ-PHYK-STIL
 * Key [2] : UMCO-YSPQ-PHYK-STIL
 * Key [3] : QBSR-MZEC-BYNA-DSYK
 * Key [4] : MISQ-ULYB-ZRAZ-LMAG
 * Key [5] : NQCR-PPFJ-KZLF-ZHMT
 */

int ReadPositiveNumber(string Message)
{
    int Number = 0;

    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

char GenerateRandomChar(void)
{
    char RandomChar = rand() % (90 - 65 + 1) + 65;

    return RandomChar;
}

string GenerateRandomKey(void)
{
    string Key = "";

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            Key += GenerateRandomChar();
        }
        Key += "-";
    }

    // Remove the last '-' character
    Key.pop_back();
    return Key;
}

void PrintResult(string Key, int Times)
{
    for (int i = 1; i <= Times; i++)
    {
        cout << "Key [" << i << "] : " << Key << endl;
    }
}

int main(void)
{
    PrintResult(GenerateRandomKey(), ReadPositiveNumber("Please enter the key number"));

    return 0;
}




