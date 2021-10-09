//Sina Khorashahi - 98440373
//1.
#include <iostream>
#include <string>
#include <cmath>
#define PI 3.1415926535
using namespace std;

int factorial(int number);

int main()
{
	double a, b;
	string op;
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << "operation (+, -, /, *, sqrt, sin, cos, tan, cot, factorial): ";
	cin >> op;
	if (op == "+")
		cout << "a + b = " << a + b;
	else if (op == "-")
		cout << "a - b = " << a - b;
	else if (op == "/")
		cout << "a / b = " << a / b;
	else if (op == "*")
		cout << "a * b = " << a * b;
	else if (op == "sqrt")
		cout << "sqrt(" << a << "): " << sqrt(a) << "\nsqrt(" << b << "): " << sqrt(b);

	else if (op == "sin")
		cout << "Sin(" << a << "): " << sin(a * PI / 180)
		<< "\nSin(" << b << "): " << sin(b * PI / 180);
	else if (op == "cos")
		cout << "Cos(" << a << "): " << cos(a * PI / 180)
		<< "\nCos(" << b << "): " << cos(b * PI / 180);
	else if (op == "tan")
		cout << "Tan(" << a << "): " << tan(a * PI / 180)
		<< "\nTan(" << b << "): " << tan(b * PI / 180);
	else if (op == "cot")
		cout << "Cot(" << a << "): " << 1 / tan(a * PI / 180)
		<< "\nCot(" << b << "): " << 1 / tan(b * PI / 180);

	else if (op == "factorial")
		cout << "factorial of " << a << " is " << factorial(a)
		<< "\nfactorial of " << b << " is " << factorial(b);

	return 0;
}
int factorial(int number)
{
	if ((number == 0) || (number == 1))
		return 1;
	else
		return number * factorial(number - 1);
}
