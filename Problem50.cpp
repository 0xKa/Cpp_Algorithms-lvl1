//a program that read ATM PIN 3 times if fails the card is locked
//let PIN = 1234
//let user balance = 7500

#include <iostream>
using namespace std;


string ReadPinCode()
{
    string pin;
    cout << "Enter The PIN code: ";
    cin >> pin;
    return pin;
}

bool login()
{
    string pin;
    int FailCounter = 3;
    do
    {
        pin = ReadPinCode();
        FailCounter--;
    
        if (pin == "1234") 
        {
            return 1;
        }
        else
        {
            system("color 4F");
            cout << "Wrong PIN !! \n\n";
            cout << "You have " << (FailCounter) << " more Tries\n";
        }
    } while (pin != "1234" && FailCounter >= 1);
    
    return 0;
}

void PrintResult(int balance)
{
    if (login())
    {
        system("color 2F");
        cout << "\nYour Balance is : " << balance << endl;
    }
    else
    {
        system("color 5F");
        cout << "\nAccount locked because you enter wrong password 3 times";
    }


}

int main()
{

    PrintResult(7500);



    cout << endl << endl;
    return 0;
}


