#include<iostream>
#include<string>
#include "account.h"
using namespace std;

void account::getinfo()
{
    cout << "Enter the name: ";
    cin >> name;
    cout << "Enter the account id: ";
    cin >> id;
    cout << "Enter the balance: ";
    cin >> balance;
    cout<<endl;
}

void account::showinfo()
{
    cout << "name: " << name << endl;
    cout << "Account id: " << id << endl;
    cout << "Balance: " << balance << endl;
    cout<<endl;
}

void account::deposit()
{
    double amount;
    cout << "Enter the amount to deposit: ";
    cin >> amount;
    balance =balance + amount;
    cout<<"New balance: "<<balance<<endl;
    cout<<endl;
}

void account::withdraw()
{
    double amt;
    cout << "Enter the amount to withdraw: ";
    cin >> amt;
    
    if (amt <= 0) {
        cout << "Invalid amount. Please enter a positive value." << endl;
        return;
    }
    
    if (amt <= balance)
    {
        balance -= amt;
        cout << "Withdrawal successful. New balance: " << balance << endl;
    }
    else
    {
        cout << "Insufficient balance" << endl;
    }
    cout<<endl;
}
