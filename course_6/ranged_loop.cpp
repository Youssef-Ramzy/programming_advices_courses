#include <iostream>
using namespace std;

int main()
{
    int Array1[5] = {1, 2, 3, 4, 5};

    for (int n : Array1)
    {
        cout << n << endl;
    }
    return 0;
}