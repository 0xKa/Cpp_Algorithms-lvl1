// a program that tells if you pass or fail

#include <iostream>
using namespace std;

enum enPassFail {Pass = 1 , Fail = 2};

short ReadMark()
{
	short mark;
	cout << "Please Enter Your Mark : ";
	cin >> mark;
	cout << endl << endl;
	return mark;
}

enPassFail CheckMark(short mark)
{
	if (mark >= 50)
		return Pass;
	else
		return Fail;
}

void PrintMark(short mark)
{
	if (CheckMark(mark) == Pass)
		cout << "\nPass";
	else
		cout << "\nFail";
}

int main()
{
	
	PrintMark(ReadMark());



	cout << endl << endl;
	return 0;
}


