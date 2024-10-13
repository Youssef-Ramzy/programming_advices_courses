#include <iostream>
using namespace std;

/**
 * Write a program to print all words from AAA to ZZZ
 * AAA
 * AAB
 * AAC
 * .
 * .
 * .
 * ZZZ
 */

void PrintLetters(void)
{
    for (int i = 65; i <= 90; i++)
    {
        for (int j = 65; j <= 90; j++)
        {
            for (int k = 65; k <= 90; k++)
                cout << char(i) << char(j) << char(k) << endl;
        }
    }
}

int main()
{
    PrintLetters();

    return 0;
}