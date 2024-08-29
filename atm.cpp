// Simple ATM app
#include <iostream>
using namespace std;

void mainMenu();

int main() {

    int option;
    double balance = 1000;
    double deposit;
    double withdrawl;
    char zero_balance = 'N';

    // Clear screen
    system("clear");

    do
    {
        mainMenu();
        cout << "Make your selection: ";
        cin >> option;
        switch (option)
        {
        case 1:
            system("clear");
            cout << "Your balance is: \e[1;32m$" << balance << "\e[0m" << endl;
            cout << endl;
            break;
        case 2:
            system("clear");
            cout << "How much would you like to deposit? (Current balance: \e[0;32m$" << balance << "\e[0m)" << endl;
            cout << "\e[0;32m$";
            cin >> deposit;
            balance += deposit;
            cout << endl;
            system("clear");
            cout << "\e[0;32mDeposited: +$" << deposit << endl;
            cout << "\e[1;36mNew Balance: \e[1;32m$" << balance << endl;
            cout << endl;
            break;
        case 3:
            system("clear");
            cout << "How much would you like to withdraw? (Current balance: \e[0;32m$" << balance << "\e[0m)" << endl;
            cout << "\e[0;31m$";
            cin >> withdrawl;
            cout << endl;
            if (balance > withdrawl) {
                balance -= withdrawl;
                cout << endl;
                system("clear");
                cout << "\e[0;31mWithdrawn: -$" << withdrawl << endl;
                cout << "\e[1;36mNew Balance: \e[1;32m$" << balance << endl;
                cout << endl;
            } else if (balance == withdrawl) {
                cout << "\e[1;33mThis will put your account at a $0 balance. Are you sure (Y/N)?: ";
                cin >> zero_balance;
                cout << endl;
                if (zero_balance == 'Y' || zero_balance == 'y') {
                    balance -= withdrawl;
                    cout << "\e[1;36mNew Balance: \e[0;31m$" << balance << endl;
                    cout << endl;
                } else if (zero_balance == 'N' || zero_balance == 'n') {
                    cout << "\e[0;33mWithdrawl canceled." << endl;
                    cout << "\e[1;36mBalance remains: \e[1;32m$" << balance << endl;
                    cout << endl;
                } else {
                    cout << "\e[0;33mInvalid selection. Withdrawl canceled." << endl;
                    cout << "\e[1;36mBalance remains: \e[1;32m$" << balance << endl;
                    cout << endl;
                }
            } else {
                cout << "\e[1;31mInsufficient funds!" << endl;
                cout << "Current balance is: $" << balance << "\e[0m" << endl;
                cout << endl;
            }
            break;
        case 4:
            cout << endl;
            cout << "Goodbye." << endl;
            cout << "Thank you for banking with us!" << endl;
            cout << endl;
            exit(0);
            break;
        default:
            cout << "\e[1;31mInvalid selection. Please choose a valid option from the menu below.\e[0m" << endl;
            cout << endl;
            break;
        }
    } while (option != -1);

    return 0;
}

// Menu system
void mainMenu() {
        cout << "\e[0;36m************************\e[0m" << endl;
        cout << "\e[0;36m**\e[0mWelcome to CPP Bank!\e[0;36m**\e[0m" << endl;
        cout << "\e[0;36m**********\e[0mMENU\e[0;36m**********\e[0m" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Make Deposit" << endl;
        cout << "3. Make Withdrawl" << endl;
        cout << "4. Quit" << endl;
        cout << "\e[0;36m************************\e[0m" << endl;
}