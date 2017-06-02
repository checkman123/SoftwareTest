/* Sanyapoom Sirijirakarn and David Landry
	Assignment: week 2 build a four function calculator program and test it
*/


#include <cstdlib>
#include <iostream>
#include "Calc.h"

using namespace std;



int main()
{
	double num1 = 0;
	double num2 = 0;
	int choice = 0;
	double result;
	char again = 'N';

	do
	{
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		cout << "Please enter first number: ";
		cin >> num1;
		cout << "Please enter second number: ";
		cin >> num2;

		cout << endl << "Please select method for these two numbers (Default will be addition)" << endl;
		cout << "1) Addition" << endl;
		cout << "2) Subtract" << endl;
		cout << "3) Division" << endl;
		cout << "4) Multiply" << endl;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		cin >> choice;
		cout << "Your choice is number: " << choice << endl;

		switch (choice)
		{
		case 1:
			result = addition(num1, num2);
			break;
		case 2:
			result = subtract(num1, num2);
			break;
		case 3:
			result = division(num1, num2);
			break;
		case 4:
			result = multiply(num1, num2);
			break;
		default:
			cout << "Invalid error. Please try again";
			again = 'Y';
			break;
		}

		cout << "The answer is: " << result << endl;

			cout << "Try again? (Y/N): ";
			cin >> again;
		cin.get();
		cout << endl;
	}while (toupper(again) != 'N');
	return EXIT_SUCCESS;
}

