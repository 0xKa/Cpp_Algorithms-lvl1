#include <iostream>
#include <cmath>

using namespace std;

struct STowenr {
	string name;
	int number;
	string ID;
};


struct STcar
{

	string brand;
	string model;
	short year;
	
	STowenr owener;


};

int main()
{


	STcar car1, car2, car3;

	car1.brand = "BMW";
	car1.model = "DSP";
	car1.year = 1991;

	car2.brand = "Nissan";
	car2.model = "Path";
	car2.year = 2019;

	car3.brand = "Ford";
	car3.model = "mustang";
	car3.year = 2023;

	car1.owener.name = "Ahmed";
	car1.owener.number = 98256317;
	car1.owener.ID = "KL09";


	car2.owener.name = "Khaled";
	car2.owener.number = 97294511;
	car2.owener.ID = "JH52";


	car3.owener.name = "Samer";
	car3.owener.number = 90112940;
	car3.owener.ID = "QO31";


	cout << "Name : " << car1.owener.name << "\t\tCar Brand : " << car1.brand << endl;
	cout << "Number : " << car1.owener.number << "\tCar Model : " << car1.model << endl;
	cout << "ID : " << car1.owener.ID << "\t\tCar Year : " << car1.year << endl;

	cout << endl;

	cout << "Name : " << car2.owener.name << "\t\tCar Brand : " << car2.brand << endl;
	cout << "Number : " << car2.owener.number << "\tCar Model : " << car2.model << endl;
	cout << "ID : " << car2.owener.ID << "\t\tCar Year : " << car2.year << endl;

	cout << endl;

	cout << "Name : " << car3.owener.name << "\t\tCar Brand : " << car3.brand << endl;
	cout << "Number : " << car3.owener.number << "\tCar Model : " << car3.model << endl;
	cout << "ID : " << car3.owener.ID << "\t\tCar Year : " << car3.year << endl;



	cout << endl << endl;
	return 0;
}

