/*
Kevin Lehman  - 1463553
Tarrant County College - COSC 1437- Fall 2017
Assignment 1 - Week 7
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct WebData
{
	string firstName;
	string lastName;
	string fullName;
	int birthDate;
	bool autoLease;
	float yearlySalary;
};

void loadFullName(WebData &);

int main()
{
	WebData newUser;

	cout << "What is the users first name?" << endl;
	getline(cin, newUser.firstName);
	cout << "What is the users last name?" << endl;
	getline(cin, newUser.lastName);
	cout << "What is the users date of birth? (yyyymmdd format)" << endl;
	cin >> newUser.birthDate;
	cout << "Is the user planning on leasing a vehicle? 1=yes and 0=no." << endl;
	cin >> newUser.autoLease;
	cout << "What is the users yearly salary?" << endl;
	cin >> newUser.yearlySalary;
	
	loadFullName(newUser);

	cout << "The new user data that was enter is: " << endl;
	cout << "First name: " << newUser.firstName << endl;
	cout << "Last name: " << newUser.lastName << endl;
	cout << "Full name: " << newUser.fullName << endl;
	cout << "Date of birth: " << newUser.birthDate << endl;
	cout << "Automobile Lease: ";
	if (newUser.autoLease == 1)
	{
		cout << "Yes." << endl;
	}
	else
	{
		cout << "No." << endl;
	}
	cout << "Yearly Salary: $" << fixed << setprecision(2) << newUser.yearlySalary << "." << endl;

	system("PAUSE");
	return 0;
}

void loadFullName(WebData &newUser)
{
	for (int x = 0; x < newUser.firstName.size(); x++)
	{
		if (islower(newUser.firstName[x]))
		{
			newUser.firstName[x] = toupper(newUser.firstName[x]);
		}
	}
	for (int x = 0; x < newUser.lastName.size(); x++)
	{
		if (islower(newUser.lastName[x]))
		{
			newUser.lastName[x] = toupper(newUser.lastName[x]);
		}
	}
	newUser.fullName.append(newUser.firstName);
	newUser.fullName.append(1, ' ');
	newUser.fullName.append(newUser.lastName);
}