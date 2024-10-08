#include <iostream>
#include <string>
#include <cmath>

using namespace std;


struct strINFO {
	string FirstName, LastName, Phone;
	short Age;
};

void ReadInfo(strINFO &info) {

	cout << "enter your first name : ";
	cin >> info.FirstName;
	cout << endl;
	
	cout << "enter your last name : ";
	cin >> info.LastName;
	cout << endl;

	cout << "enter your age : ";
	cin >> info.Age;
	cout << endl;

	cout << "enter your phone number : ";
	cin >> info.Phone;
	cout << endl;

}

void PrintInfo(strINFO info){

	cout << "************************************" << endl;

	cout << "First Name : " << info.FirstName << endl;
	cout << "Last Name : " << info.LastName << endl;
	cout << "Age : " << info.Age << endl;
	cout << "Phone Number : " << info.Phone << endl;

	cout << "************************************" << endl << endl;

}

void ReadPersonsInfo(strINFO person[100], int &NumberOfPersons) {

	
	cout << "how many persons do you want ? \n";
	cin >> NumberOfPersons;



	for (int i = 0; i < NumberOfPersons; i++)
	{
		cout << "please enter Person's [" << i + 1 << "] info:\n";
		ReadInfo(person[i]);
		cout << "****************************************\n\n";
	}



}

void PrintPersonsInfo(strINFO person[100], int NumberOfPersons) {

	cout << endl << endl;

	for (int i = 0; i < NumberOfPersons; i++)
	{
		cout << "PERSON [" << i + 1 << "]:\n";
		PrintInfo(person[i]);
	}

}

int main()
{
	int NumberOfPersons = 0;

	strINFO person[100];
	ReadPersonsInfo(person, NumberOfPersons);
	PrintPersonsInfo(person,NumberOfPersons);

	cout << endl << endl;
	return 0;
}

