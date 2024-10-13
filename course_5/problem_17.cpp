#include <iostream>
using namespace std;

/**
 * Problem:
 * Write a program to guess a 3-Letter Password (all capital)
 * Trial [1] : AAA
 * Trial [2] : AAB
 * Trial [3] : AAC
 * Trial [4] : AAD
 * Trial [5] : AAE
 * Trial [6] : AAF
 * Password is AAF
 * Found after 6 Trial(s)
 */

string Read3LetterPassword()
{
    string Password;

        cout << "Please enter 3-letter password" << endl;
        cin >> Password;

    return Password;
}

void PrintLetters(string Password)
{
    string Word;
    for (char i = 'A'; i <= 'Z'; i++)
    {
        for (char j = 'A'; j <= 'Z'; j++)
        {
            for (char k = 'A'; k <= 'Z'; k++)
            {
                Word = string(1, i) + string(1, j) + string(1, k);
                cout << "Trial [" <<
                (i - 'A') * 26 * 26 + (j - 'A') * 26 + (k - 'A' + 1) << "] : " << Word << endl;
                if (Word == Password)
                {
                    cout << "Found after " <<
                    (i - 'A') * 26 * 26 + (j - 'A') * 26 + (k - 'A' + 1) << " Trial(s)" << endl;
                    return;
                }
            }
        }
    }
}

int main()
{
    PrintLetters(Read3LetterPassword());

    return 0;
}