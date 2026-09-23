
#include <iostream>
using namespace std;
class BankAccount
{
public:
    int accountNumber;
    string accountHolderName;
    double balance;
    void input(int a, string n, double b)
    {
        accountNumber = a;
        accountHolderName = n;
        balance = b;
    }
    void deposit(double amount)
    {
        balance = balance + amount;
    }
    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance = balance - amount;
        }
        else
        {
            cout << "Insufficient balance!" << endl;
        }
    }
    void display()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
    }
};
int main()
{
    BankAccount account;
    account.input(101, "Yesmin", 10000);
    account.deposit(4000);
    account.withdraw(2000);
    account.display();
    return 0;
}