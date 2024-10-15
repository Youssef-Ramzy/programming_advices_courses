#include <iostream>
#include <chrono>
#include <unistd.h>  // For sleep()
using namespace std;

/**
 * Problem:
 * Write a program to print 3 random numbers from 1 to 10.
 * Output:
 * 9
 * 5
 * 3
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

int RandomNumberGenerator(int From, int To) // Get this shit from chatgpt pro.
{
    // Get the current time in milliseconds since epoch
    auto now = chrono::system_clock::now();
    auto millis = chrono::duration_cast<chrono::milliseconds>(now.time_since_epoch()).count();

    // Apply some arithmetic to spread out the randomness
    long long pseudoRandom = millis * 12345;  // Multiply by a constant prime-like number

    // Use modulus to limit the range to 0-8, then add 1 to shift to 1-9
    int randomNumber = (pseudoRandom % 9) + 1;

    return randomNumber;
}

void PrintNumberAmount(int Amount, int From, int To)
{
    for (int i = 0; i < Amount; i++)
    {
        cout << RandomNumberGenerator(From, To) << endl;
        sleep(1);
    }
}

int main()
{
    int Amount = ReadPositiveNumber("Please enter the amount of random Numbers");
    int From = 1, To = 9;

    PrintNumberAmount(Amount, From, To);

    return 0;
}
