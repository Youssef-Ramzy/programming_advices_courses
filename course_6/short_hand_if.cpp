#include <iostream>
using namespace std;

int main()
{
    int Mark = 50;
    string Result;

    if (Mark >= 50)
    {
        Result = "Pass";
    }
    else
    {
        Result = "Fail";
    }
    cout << Result << endl;

    Result = (Mark >= 50) ? "Pass" : "Fail";

    cout << Result << endl;
    return 0;
}