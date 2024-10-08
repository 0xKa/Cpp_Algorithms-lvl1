//a program to cheak if the user older than 21 and has a driver license

#include <iostream>
using namespace std;

struct stData
{
	short Age;
	bool HasDriverLicense;
};

stData ReadData()
{
	stData Data;
	cout << "Please Enter Your Age : ";
	cin >> Data.Age;
	cout << "\nDo You Have a Driver License?\n";
	cin >> Data.HasDriverLicense;

	return Data;
}

bool IsAccepted(stData data)
{
	return (data.Age > 21 && data.HasDriverLicense == 1);
}

void PrintResult(stData data)
{
	cout << "\nYou Are [";
	if (IsAccepted(data))
	{
		cout << "Hierd";
	}
	else
	{
		cout << "Rejected";
	}
	cout << "]";
}

int main()
{

	PrintResult(ReadData());

	cout << endl << endl;
	return 0;
}
