//Program that calculate pennies ,nickels, dimes, quarters, dollars.
//Penny = 1
//Nickel = 5
//Dime = 10
//Quarter = 25
//Dollar = 100

#include <iostream>
using namespace std;


struct stPiggyBankContent
{
    int pennies, nickels, dimes, quarters, dollars;
};

stPiggyBankContent ReadInput()
{
    stPiggyBankContent PBcontent;
    cout << "please enter  a value for pennies \n";
    cin >>PBcontent.pennies;

    cout << "please enter  a value for nickels \n";
    cin >> PBcontent.nickels;

    cout << "please enter  a value for dimes \n";
    cin >> PBcontent.dimes;

    cout << "please enter  a value for quarters \n";
    cin >> PBcontent.quarters;

    cout << "please enter  a value for dollars \n";
    cin >> PBcontent.dollars;

    cout << endl << endl;
    return PBcontent;
}

int CalculateTotalPennies(stPiggyBankContent PBContent)
{
    return PBContent.pennies + PBContent.nickels * 5 + PBContent.dimes * 10 + PBContent.quarters * 25 + PBContent.dollars * 100;

}

int main()
{


    float TotalPennies = CalculateTotalPennies(ReadInput());
    cout << "Total Pennies = " << TotalPennies << endl;
    cout << "Total Dollars = " << TotalPennies / 100 << endl;


    cout << endl << endl;
    return 0;
}
