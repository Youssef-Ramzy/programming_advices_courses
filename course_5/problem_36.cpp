#include <iostream>
using namespace std;

/**
 * Problem: 36 
 * Write a program to dynamically read numbers and save them in an array
 * Max size of array is 100, allocate simi-dynamic array length.
 * Please enter a number? 10
 * Do you want to add more numbers? 1
 * Please enter a number? 20
 * Do you want to add more numbers? 1
 * Please enter a number? 30
 * DO you want to add more numbers? O
 * Array Length: 3
 * Array elements: 10 20 30
*/

int WriteDynamicArray(int Array[100])
{
    int Check = 1;
    int i;
    for (i = 0; Check == 1; i++)
    {
        cout << "Please enter a number?" << endl;
        cin >> Array[i];
        cout << "Do you wnat to add more number? ";
        cin >> Check;
    }
    return i;
}

void PrintArray(int Array[100], int ArrayLength)
{
    cout << "Array Length is: " << ArrayLength << endl;
    cout << "Array elements: ";

    for (int i = 0; i < ArrayLength; i++)
    {
        cout << Array[i] << " ";
    }
    cout << endl;
}

int main()
{
    int Array[100] = {0};
    int ArrayLength = WriteDynamicArray(Array);

    PrintArray(Array, ArrayLength);

    return 0;
}