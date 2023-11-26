// WAP  q1to represent a bank account
#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string name;
    int accountNumber;
    string accountType;
    double balance;

public:
    // To assign values
    void setData(string name, int accountNumber, string accountType, double balance)
    {
        this->name = name;
        this->accountNumber = accountNumber;
        this->accountType = accountType;
        this->balance = balance;
    }

    // To deposited an amount
    void deposit(double amount)
    {
        balance += amount;
    }

    // To withdraw an amount after checking balance
    bool withdraw(double amount)
    {
        if (balance >= amount)
        {
            balance -= amount;
            return true;
        }
        else
        {
            cout << "Insufficient balance" << endl;
            return false;
        }
    }

    // To display name and balance
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    string name;
    int accountNumber;
    string accountType;
    double balance;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter account number: ";
    cin >> accountNumber;
    cout << "Enter account type (Savings/Current): ";
    cin >> accountType;
    cout << "Enter balance: ";
    cin >> balance;
    double amount;
    cout << "Enter amount to deposit: ";
    cin >> amount;
    BankAccount account;
    account.setData(name, accountNumber, accountType, balance);

    int choice;
    cout << "What want to like to proceed: \n press 1. for deposit, \n press 2. for withdraw.";
    cout << "Enter your choice: ";
    cin >> choice;
    if (choice == 1)
    {
        account.deposit(amount);
    }
    else if (choice == 2)
    {
        account.withdraw(amount);
    }
    else
    {
        cout << "Invalid choice"; 
    }
    account.display();
    return 0;
}