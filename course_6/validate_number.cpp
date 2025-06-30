#include <iostream>
#include <limits>
using namespace std;

int ReadNumber()
{
    int Number;
    cout << "Please enter a number" << endl;
    cin >> Number;

    while (cin.fail())
    {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        cout << "Invalit Number, Enter a valit one" << endl;
        cin >> Number;
    }

    return Number;
}

int main()
{
    cout << "Your number is " << ReadNumber();
}