//Sina Khorashahi - 98440373
//4.
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string firstName, familyName;
	cout << "First name: ";
	cin >> firstName;
	cout << "Family name: ";
	cin >> familyName;
	cout << "Score:\n";
	float sum = 0, average = 0, score;
	for (int i = 0; i < 3; ++i)
	{
		cout << i + 1 << ". ";
		cin >> score;
		sum += score;
	}
	average = sum / 3;
	cout << "Status of " << firstName << " " << familyName << ": ";
	if (average < 12)
		cout << "fail";
	else if (12 <= average < 17)
		cout << "normal";
	else
		cout << "great";
	return 0;
}

