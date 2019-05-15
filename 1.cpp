#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int a, b;
	cout << "Enter a number: ";
	cin >> a;

	cout << "Multiplication table of..." << a << endl;

	for (b=1; b <= 10; b++)
	{
		cout << b << " x " << a << " = " << b*a << endl;
	}


	_getch();
	return 0;
}