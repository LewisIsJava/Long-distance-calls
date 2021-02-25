// Long-distance calls.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    char dayLOne, dayLtwo;
	int hourOfDay, minutesOnCall;
	double payRate, totalCost;

	cout << "Please enter what day you are calling from by using their first two initals (Mo for monday): ";
	cin >> dayLOne >> dayLtwo;

	if ((dayLOne == 'S' || dayLOne == 's') && (dayLtwo == 'A' || dayLtwo == 'a' || dayLtwo == 'u' || dayLtwo == 'U'))
	{
		payRate = 0.15; // on a weekend pay rate is 0.15 cent per minute;
		cout << "Now enter what hour of the day you are calling at (0-24)";
		cin >> hourOfDay;
		if (true)
		{
			cout << "Now enter your minutes on call: ";
			cin >> minutesOnCall;
			totalCost = minutesOnCall * payRate;
			cout << "The total cost of this call is $" << totalCost;
		}
	}
	else
	{
		cout << "Now enter what hour of the day you are calling at (0-24)";
		cin >> hourOfDay;
		if (hourOfDay < 8 || hourOfDay > 18)
		{
			payRate = 0.25;
			cout << "Now enter your minutes on call: ";
			cin >> minutesOnCall;
			totalCost = minutesOnCall * payRate;
			cout << "The total cost of this call is $" << totalCost;
		}
		else
		{
			payRate = 0.45;
			cout << "Now enter your minutes on call: ";
			cin >> minutesOnCall;
			totalCost = minutesOnCall * payRate;
			cout << "The total cost of this call is $" << totalCost;
		}
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
