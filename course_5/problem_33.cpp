#include <iostream>
using namespace std;

/**
 * Problem: 33
 * Write a program to read how many keys to generate and fill
 * them in array then print them on the screen.
 * Input: 5
 * Output: 
 * Array elements:
 * 
 * Array[0] : NRXC-DXRO-QEAM-WRWE
 * Array[1] : BJTR-KIKF-ATEW-WNTT
 * Array(2] : QOFX-KZEL-SSDP-AKSI
 * Array[3] : GFOI-ELFX-ZCVE-PSTP
 * Array[4] : MATF-PRQA-PQEQ-TRIM
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

char CreateRandomChar(void)
{
    return rand() % (90 - 65 + 1) + 65;
}

string CreateRandomKey(void)
{
    string Key;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            Key += CreateRandomChar();
        }
        if (i < 3)
            Key += "-";
    }

    return Key;
}

void WriteAnArrayOfRandomKeys(string Array[100], int ArrayLength)
{
    for (int i = 0; i < ArrayLength; i++)
    {
        Array[i] = CreateRandomKey();
    }
}

void PrintArray(string Array[100], int ArrayLength)
{
    for (int i = 0; i < ArrayLength; i++)
    {
        cout << "Array[" << i + 1 << "] : " << Array[i] << endl;
    }
}

int main()
{
    srand(time(0));
    string Array[100] = {""};
    int ArrayLength = ReadPositiveNumber("Enter the array length");

    WriteAnArrayOfRandomKeys(Array, ArrayLength);
    PrintArray(Array, ArrayLength);

    return 0;
}