//a program that check if th PIN code is correct [PIN code = "1234"]

#include <iostream>
using namespace std;

string ReadPINcode()
{
	string code;
	cout << "Enter PIN code : \n";
	cin >> code;
	return code;
}

bool login()
{
	string code;
	do
	{
		code = ReadPINcode();

		if (code == "1234")
		{
			return 1;
		}
		else
		{
			system("color 4F");
			cout << "\nWrong PIN\n\n";
		}
	} while (code != "1234");
	
	return 0;
}

int main()
{


	if (login())
	{
		system("color 2F");
		cout << "\nYour balance is = " << "\"" << 7500 << " Dollar" << "\"";
	};
	








	cout << endl << endl;
	return 0;
}

