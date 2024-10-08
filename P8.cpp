#include <iostream>
#include <cmath>
#include <string>

using namespace std;

struct strInfo {

	string full_name;
	short age;
	string phone_number;
	string country;

};
	void ReadInfo(strInfo &Person1)
{

	cout << "please enter your full name : ";
	
	getline(cin, Person1.full_name);
	cout << endl;

	cout << "please enter your age : ";
	cin >> Person1.age;
	cout << endl;

	cout << "please enter your phone number : ";
	cin >> Person1.phone_number;
	cout << endl;

	cout << "please enter your country : ";
	cin >> Person1.country;
	cout << endl;

}

	void PrintInfo(strInfo Person1)
{
	cout << "**************************************\n";
	cout << "Name : " << Person1.full_name << endl;
	cout << "age : " << Person1.age << endl;
	cout << "country : " << Person1.country << endl;
	cout << "phone number : " << Person1.phone_number << endl;
	cout << "**************************************\n";

}



int main()
{
	strInfo Person1;
	ReadInfo(Person1);
	PrintInfo(Person1);



	//cin.ignore(1);

	//strInfo Person2;
	//ReadInfo(Person2);
	//PrintInfo(Person2);

	//cin.ignore(1);

	//strInfo Person3;
	//ReadInfo(Person3);
	//PrintInfo(Person3);





	cout << endl << endl;

	return 0;
}

