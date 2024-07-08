#include <iostream>
using namespace std;


void grads_avg(float grads[3])
{
	cout << "Please enter Grade1: ";
	cin >> grads[0];
	cout << "Please enter Grade2: ";
	cin >> grads[1];
	cout << "Please enter Grade3: ";
	cin >> grads[2];

	float avg = ((grads[0] + grads[1] + grads[2]) / 3);
	cout << "The avrage is: " << avg << endl;
}

int main(void)
{
	int x[5] = {43, 23, 69, 20, -1};

	cout << x[0] << endl // 43
		 << x[1] << endl // 23
		 << x[2] << endl // 69
		 << x[3] << endl // 20
		 << x[4] << endl; // -1

	float grads[3];

	grads_avg(grads);
}
