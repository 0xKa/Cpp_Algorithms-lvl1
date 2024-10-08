// a program that print your grade

#include <iostream>
using namespace std;


float ReadGrade(int From, int To)
{
	float Grade;

	do{
	cout << "please enter a your grade (0-100) \n";
	cin >> Grade;
	}while (Grade < From || Grade > To);
	


	return Grade;
}

char PrintResult(int Grade)
{
	if (Grade >= 90)
		return 'A';
	else if (Grade >= 80)
		return 'B';
	else if (Grade >= 70)
		return 'C';
	else if (Grade >= 60)
		return 'D';
	else if (Grade >= 50)
		return 'E';
	else
		return 'F';

}

int main()
{

	
	cout << "Result = " << PrintResult(ReadGrade(0, 100));


	cout << endl << endl;
	return 0;
}
