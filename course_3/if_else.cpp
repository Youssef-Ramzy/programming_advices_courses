#include <iostream>
using namespace std;


int main(void)
{
	int x = 10;

	if (x > 5 && x < 20)
	{
		printf("x is greater than 5 and less than 20.\n");
	}
	else if (x > 20)
	{
		printf("X is bigger than 20\n");
	}
	else
	{
		printf("x is not greater than 5 or less than 20\n");
	}
}
