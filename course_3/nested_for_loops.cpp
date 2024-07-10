#include <iostream>
using namespace std;


void multiplication_talbe(void)
{
	for (int i = 1; i <= 12; i++)
	{
		cout << "i = " << i << endl;
		for (int j = 1; j <= 12; j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}
		cout << "----------\n";
	}
}

void stars_table(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

void left_piramid(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

void up_down_left_piramid(void)
{
	for (int i = 10; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
void left_num(void)
{
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j;
		}
		cout << endl;
	}
}

void up_down_left_num(void)
{
	for (int i = 10; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j;
		}
		cout << endl;
	}
}

void a_z(void)
{
	for (int i = 65; i <= 90; i++)
	{
		for (int j = 65; j <= 90; j++)
		{
			cout << (char)i << (char)j << endl;
		}
	}
}

void a_f(void)
{
	for (int i = 5; i >= 0; i--)
	{
		for (int j = 65; j <= 70 - i; j++)
		{
			cout << (char)j;
		}
		cout << endl;
	}
}

void up_down_left_count_num(void)
{
	for (int i = 1; i <= 10; i++)
	{
		for (int j = i; j <= 10; j++)
		{
			cout << j;
		}
		cout << endl;
	}
}

int main(void)
{
	// multiplication_talbe();
	// stars_table();
	// left_piramid();
	// up_down_left_piramid();
	// left_num();
	// up_down_left_num();
	// a_z();
	// a_f();
	// up_down_left_count_num(); // I could't solve hthis by my self.
}
