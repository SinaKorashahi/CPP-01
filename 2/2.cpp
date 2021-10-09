//Sina Khorashahi - 98440373
//2.
#include <iostream>
using namespace std;

int main()
{
	float a, b, c;
	cout << "Please enter the value of each side of the triangle.\na: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	cout << "c: ";
	cin >> c;
	if (a + b > c || a + c > b || b + c > a)
		cout << "We can make a triangle.";
	else
		cout << "We can't make a triangle.";

	return 0;
}

