#include<iostream>
using namespace std;
class BankAccount {
    private:
        int accountNumber;
        double balance;

    public:
        BankAccount(int accountNumber) {
            this->accountNumber = accountNumber;
            this->balance = 0.0;
        }

        void deposit(double amount) {
            if(amount > 0) {
                balance += amount;
                cout << "Amount " << amount << " has been deposited successfully. " << endl;
            } else {
                cout << "Invalid deposit amount." << endl;
            }
        }

        void withdraw(double amount) {
            if(amount > 0 && balance >= amount) {
                balance -= amount;
                cout << "Amount " << amount << " has been withdrawn successfully. " << endl;
            } else {
                cout << "Invalid withdrawal amount or insufficient balance." << endl;
            }
        }

        void displayBalance() {
            cout << "Account Number: " << accountNumber << endl;
            cout << "Current Balance: $" << balance << endl;
        }
};

int main() {
    BankAccount account(123456);

    account.deposit(1000);
    account.withdraw(500);

    account.displayBalance();

    return 0;
}