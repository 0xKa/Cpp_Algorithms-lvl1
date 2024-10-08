//a program that print all the letters 

#include <iostream>
using namespace std;


void PrintLetters_A_to_Z()
{
	for (int i = 65; i <= 90; i++)
	{
		cout << char(i) << " ";
	}
}
void PrintLetters_a_to_z()
{
	for (int i = 97; i <= 122; i++)
	{
		cout << char(i) << " ";
	}
}



int main()
{

	PrintLetters_A_to_Z();
	cout << endl;
	PrintLetters_a_to_z();





	cout << endl << endl;
	return 0;
}

