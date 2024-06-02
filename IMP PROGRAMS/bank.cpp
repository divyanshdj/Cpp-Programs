/*

Q.2. Define a class in C++ to represent a bank account. Take assumptions for data and member functions.
*/

#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string accountNumber;
    string accountHolderName;
    double balance;

public:
    
    BankAccount(const string& number, const string& holder, double initialBalance)
        : accountNumber(number), accountHolderName(holder), balance(initialBalance) {}

    
    void deposit(double amount) {
        balance += amount;
        cout << "Deposit of $" << amount << " successful\n";
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal of $" << amount << " successful\n";
        } else {
            cout << "Insufficient funds\n";
        }
    }

    void display() const {
        cout << "Account Number: " << accountNumber << "\n";
        cout << "Account Holder: " << accountHolderName << "\n";
        cout << "Balance: $" << balance << "\n";
    }
};

int main() {
    string acc,name;
    double amount,depo,wdrw;

    cout<<"Give Acc. Number :";
    cin>>acc;
    cout<<"Give Owner Name :";
    cin>>name;
    cout<<"Give Balance of Bank :";
    cin>>amount;

    BankAccount account(acc,name,amount);

    cout<<"Deposit Money :";
    cin>>depo;
    account.deposit(depo);

    cout<<"Withdraw Money :";
    cin>>wdrw;
    account.withdraw(wdrw);

    account.display();

    return 0;
}
