#include <iostream>
#include <math.h>
using namespace std;


int main(void)
{
	// Problem n.16
	int a = 5, d = 40;

	cout << (a * sqrt(pow(d, 2) - pow(a, 2))) << endl;
	cout << "----------" << endl;

	// Problem n.18
	int r = 5;

	cout << ceil( M_PI * pow(r, 2)) << endl;
	cout << "----------" << endl;

	// Problem n.19
	int D = 10;

	cout << ceil((M_PI * pow(D, 2)) / 4) << endl;
	cout << "----------" << endl;

	// Problem n.20
	int A = 10;

	cout << ceil((M_PI * pow(A, 2)) / 4) << endl;
	cout << "----------" << endl;

	// Problem n.21
	int L = 20;

	cout << floor(pow(L, 2) / (4 * M_PI)) << endl;
	cout << "----------" << endl;

	// Problem n.22
	int i = 20, b = 10;

	cout << floor(M_PI * (pow(b, 2) / 4) * ((2 * i - b) / (2 * i + b))) << endl;
	cout << "----------" << endl;

}
