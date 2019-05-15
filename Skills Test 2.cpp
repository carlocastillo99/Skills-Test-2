#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int c, a, r;
cout << "Enter the first number: ";
cin >> c;
cout << "Enter the second number: ";
cin >> a;
cout << "Enter the third number: ";
cin >> r;
{
	if  (c > a && c > r)
		cout << "The greatest number is:" << c << endl;

	else if (a > c && a > r)
		cout << "The greatest number is: " << a << endl;
	else if (r > a && r > c)
		cout << "The greatest number is:" << r << endl;
}
_getch();
return 0;
}