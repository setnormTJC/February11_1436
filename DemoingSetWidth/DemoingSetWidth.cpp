// DemoingSetWidth.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iomanip> 
#include<iostream> //this lets us use cout to print stuff

using std::cout; 

int main()
{//braces
	cout << std::left << std::setw(20) << "Name";
	cout << std::left << std::setw(20) << "Units available";
	cout << std::left << std::setw(9) << "Cost";
	cout << std::left << std::setw(25) << "Description";
	cout << "\n";

	cout << std::left << std::setw(20) << "Nike men's shoe";
	cout << std::left << std::setw(20) << "10";
	cout << std::left << std::setw(9) << "1,715.69";
	cout << std::left << std::setw(25) << "Shoes that are probably too expensive";
	cout << "\n";


	//cout << std::left << std::setw(20) << "Nike men's shoe";
	//cout << std::left << std::setw(20) << "10";
	//cout << std::left << std::setw(6) << "1,715.69";
	//cout << std::left << std::setw(50) << "Shoes that are probably too expensive";
	//cout << "\n";

	//cout << "NameUnitsCostDescription\n"; //new line
	//UnitsAvailableCost";
}


