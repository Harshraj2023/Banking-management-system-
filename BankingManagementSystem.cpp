
#include <iostream>
#include <string>
using namespace std;

class Account {
private:
    string name;
    int accountNumber;
    double balance;

public:
    Account(string accName, int accNum, double accBalance) {
        name = accName;
        accountNumber = accNum;
        balance = accBalance;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << "\n";
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance.\n";
        } else {
            balance -= amount;
            cout << "Withdrawn: " << amount << "\n";
        }
    }

    void display() {
        cout << "Account Number: " << accountNumber << "\n";
        cout << "Name: " << name << "\n";
        cout << "Balance: $" << balance << "\n";
    }
};

int main() {
    Account myAccount("John Doe", 12345, 500.0);

    myAccount.display();
    myAccount.deposit(200.0);
    myAccount.withdraw(100.0);
    myAccount.display();

    return 0;
}
