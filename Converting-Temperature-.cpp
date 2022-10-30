// Converting-Temperature-.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream> 
using namespace std;
int main()
{
	int temp_fahrenheit, temp_celsius, choice;// Variable definition
	cout << "If you want to convert temperature from fahrenheit to celsius (Press 1)"<<endl; 
	cout << "If you want to convert temperature from celsius to fahrenheit (Press 2)";
	cin >> choice;// Enter choice 
	switch (choice)
	{
		// If user enters 1 
	case 1:cout << "Converting temperature from fahrenheit to celsius !\n"; cout << "Enter temperature in fahrenheit :- \n";
		cin >> temp_fahrenheit;
		temp_celsius = (temp_fahrenheit - 32) * 5 / 9;
		cout << "Temperature in fahrenheit was " << temp_fahrenheit << endl;
		cout << "Temperature in celsius will be " << temp_celsius << endl;
		break;
		// If user enters 2 
	case 2: cout << "Converting temperature from celsius to fahrenheit !\n"; cout << "Enter temperaure in celsius :- \n";
		cin >> temp_celsius;
		temp_fahrenheit = (temp_celsius * 9.0) / 5.0 + 32;
		cout << "Temperature in celsius was " << temp_celsius << endl; cout << "Temperature in fahrenheit will be " << temp_fahrenheit << endl;
		break;
		// If user enters other yalue than 1 or 2 
	default:cout << "Invalid choice entered !!! ";
	}
	return 0;
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
