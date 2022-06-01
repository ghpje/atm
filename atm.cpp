// Simple ATM app
#include <iostream>
using namespace std;

int main() {

    int option;
    double balance = 1000;
    double deposit;
    double withdrawl;
    char zero_balance = 'N';

    // Clear screen
    system("clear");

    cout << endl;
    cout << "\033[0;31mTEST COLOR - Red\033[0m" << endl;
    cout << "\033[0;32mTEST COLOR - Green\033[0m" << endl;
    cout << "\033[0;36mTEST COLOR - Cyan\033[0m" << endl;
    cout << "\033[1;36mTEST COLOR - Bold Cyan\033[0m" << endl;
    cout << "\033[1;31mTEST COLOR - Bold Red\033[0m" << endl;
    cout << "\033[1;32mTEST COLOR - Bold Green\033[0m" << endl;
    cout << "\033[1;33mTEST COLOR - Bold Yellow\033[0m" << endl;
    
    do
    {
        // Menu system
        cout << endl;
        cout << "\033[0;36m************************" << endl;
        cout << "**Welcome to CPP Bank!**" << endl;
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
            cout << "Your balance is: \033[1;32m$" << balance << "\033[0m" << endl;
            break;

        case 2:
            cout << "How much would you like to deposit?\033[0;32m" << endl;
            cout << "$";
            cin >> deposit;
            balance += deposit;
            cout << endl;
            cout << "\033[0;32mDeposited: $" << deposit << endl;
            cout << "\033[1;36mNew Balance: \033[1;32m$" << balance << endl;
            break;

        case 3:
            cout << "How much would you like to withdraw?\033[0;31m" << endl;
            cout << "$";
            cin >> withdrawl;
            cout << endl;
            if (balance > withdrawl) {
                balance -= withdrawl;
                cout << "\033[0;31mWithdrew: $" << deposit << endl;
                cout << "\033[1;36mNew Balance: \033[1;32m$" << balance << endl;
            } else if (balance == withdrawl) {
                cout << "\033[1;33mThis will put your account at a $0 balance. Are you sure (Y/N)?: ";
                cin >> zero_balance;
                if (zero_balance == 'Y' || 'y') {
                    balance -= withdrawl;
                    cout << zero_balance;
                    cout << "\033[1;36mNew Balance: \033[0;31m$" << balance << endl;
                } else if (zero_balance == 'N' || 'n') {
                    cout << zero_balance;
                    cout << "\033[1;36mWithdrawl canceled." << endl;
                    cout << "Balance remains: \033[1;32m$" << balance << endl;
                } else {
                    cout << zero_balance;
                    cout << "\033[0;33mInvalid selection. Withdrawl canceled.";
                }
            } else {
                cout << "\033[1;31mInsufficient funds!" << endl;
                cout << "Your balance is only: $" << balance << "\033[0m" << endl;
            }
            break;

        case 4:
            cout << endl;
            cout << "Goodbye." << endl;
            cout << "Thank you for banking with us!" << endl;
            cout << endl;
            break;

        default:
            cout << "\033[1;31mInvalid selection. Please choose a valid option from the menu below.\033[0m" << endl;
            cout << endl;
            break;
        }
    } while (option != 4);

    return 0;
}
