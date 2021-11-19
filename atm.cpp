// Simple ATM app
#include <iostream>
using namespace std;

int main() {
    
    int option;
    double balance = 1000;
    double deposit;
    double withdrawl;

    do
    {
        cout << endl;
        cout << "**********MENU**********" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Make Deposit" << endl;
        cout << "3. Make Withdrawl" << endl;
        cout << "4. Quit" << endl;
        cout << "************************" << endl;
        cin >> option;
        system("clear");
        switch (option)
        {
        case 1:
            cout << "Your balance is $" << balance << endl;
            break;

        case 2:
            cout << "How much would you like to deposit?" << endl;
            cin >> deposit;
            balance = balance + deposit;
            cout << "Balance: $" << balance << endl;
            break;

        case 3:
            cout << "How much would you like to withdraw?" << endl;
            cin >> withdrawl;
            if (balance > withdrawl) {
                balance = balance - withdrawl;
            } else {
                cout << "Insufficient funds!" << endl;
            }
            cout << "Balance: $" << balance << endl;
            break;

        case 4:
            cout << "Goodbye." << endl;
            cout << "Thank you for banking with us!" << endl;
            break;
        
        default:
            cout << "Invalid selection. Please choose a valid option from the menu below." << endl;
            cout << endl;
            break;
        }
    } while (option != 4);
    
    //system("pause");
    return 0;
}