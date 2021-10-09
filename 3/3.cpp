//Sina Khorashahi - 98440373
//3.
#include <iostream>
using namespace std;

int main()
{
	float weight, height;
	cout << "Weight(Kg): ";
	cin >> weight;
	cout << "Height(m): ";
	cin >> height;
	float bmi = weight / (height * height);
	cout << "BMI =  " << bmi << "\nBody mass index: ";
	if (bmi < 18.5)
		cout << "underweight";
	else if (18.5 <= bmi < 24.9)
		cout << "normal";
	else if (25 <= bmi < 29.9)
		cout << "overweight";
	else if (30 <= bmi < 34.9)
		cout << "obese";
	else
		cout << "extremely obese";
	return 0;
}

