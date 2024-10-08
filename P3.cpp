#include <iostream>
#include <string>
#include <cmath>
using namespace std;



struct strInfo {

    string name;
    short age;
    string city;
    string country;
    float MonthlySalary;
    char gender;
    bool married;

};


void ReadInfo(strInfo &Person1)
{

    cout << "what is your name?\n";
    getline(cin, Person1.name);

    cout << "how old are you?\n";
    cin >> Person1.age;

    cout << "what city are you from?\n";
    cin >> Person1.city;

    cout << "what country are you from?\n";
    cin >> Person1.country;

    cout << "how much is your monthly salary?\n";
    cin >> Person1.MonthlySalary;

    cout << "what is your gender (M/F)?\n";
    cin >> Person1.gender;

    cout << "are you married?\n";
    cin >> Person1.married;


}

void PrintInfo(strInfo Person1)
{
    cout << "\n******************************************\n";
    cout << "Name: " << Person1.name << endl;
    cout << "Age: " << Person1.age << endl;
    cout << "City: " << Person1.city << endl;
    cout << "Country : " << Person1.country << endl;
    cout << "Monthly Salary : " << Person1.MonthlySalary << endl;
    cout << "Yaerly Salary : " << Person1.MonthlySalary * 12 << endl;
    cout << "Gender: " << Person1.gender << endl;
    cout << "Married: " << Person1.married << endl;
    cout << "******************************************\n\n\n";

}








int main()
{
    

    strInfo Person1;
    ReadInfo(Person1);
    PrintInfo(Person1);







    cout << endl << endl;
    return 0;
}
