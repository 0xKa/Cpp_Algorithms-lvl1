//hire a drier (case 2)
#include <iostream>
using namespace std;

struct stInfo
{
	int age;
	bool hasDriverLicence;
	bool hasRecommendation;
};

stInfo ReadInfo()
{
	stInfo info;
	cout << "enter your age : ";
	cin >> info.age;
	cout << endl;
	cout << "do you have licence?\n";
	cin >> info.hasDriverLicence;
	cout << endl;
	cout << "do you have Recommendation?\n";
	cin >> info.hasRecommendation;
	cout << endl << endl;
	return info;
}

bool isAccpted(stInfo info)
{
	if (info.hasRecommendation)
	{
		return true;
	}
	else
	{
		return (info.age > 21 && info.hasDriverLicence == 1);
	}

}

void PrintResult(stInfo info)
{
	if (isAccpted(info))
	{
		cout << "Hired";
	}
	else
	{
		cout << "rejected";
	}
}

int main()
{
	PrintResult(ReadInfo());




	cout << endl << endl;
	return 0;
}

