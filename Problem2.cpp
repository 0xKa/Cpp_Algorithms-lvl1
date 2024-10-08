#include <iostream>
#include <string>
using namespace std;


string ReadUserName() 
{
	string UserName;
	cout << "please enter your name : ";
	getline(cin, UserName);
	return UserName;

}

void PrintUserName(string UserName)
{

	cout << "\nYour Name is " << UserName;
}




int main()
{

	PrintUserName(ReadUserName());




	cout << endl << endl;
	return 0;
}


