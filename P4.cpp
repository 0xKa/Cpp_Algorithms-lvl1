#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void ReadMarks(float Grades[9])
{

	cout << "please enter grade 1 : ";
	cin >> Grades[0];
	cout << "please enter grade 2 : ";
	cin >> Grades[1];
	cout << "please enter grade 3 : ";
	cin >> Grades[2];
	cout << "please enter grade 4 : ";
	cin >> Grades[3];
	cout << "please enter grade 5 : ";
	cin >> Grades[4];
	cout << "please enter grade 6 : ";
	cin >> Grades[5];
	cout << "please enter grade 7 : ";
	cin >> Grades[6];
	cout << "please enter grade 8 : ";
	cin >> Grades[7];
	cout << "please enter grade 9 : ";
	cin >> Grades[8];










	cout << endl << endl;

}

float GradesAvrage(float Grades[9])
{

	return (Grades[0] + Grades[1] + Grades[2] + Grades[3] + Grades[4] + Grades[5] + Grades[6] + Grades[7] + Grades[8]) / 9;

}

int main()
{

	float Grades[9];
	ReadMarks(Grades);
	cout << "Reasult = " << GradesAvrage(Grades);







	cout << endl << endl;
	return 0;
}

