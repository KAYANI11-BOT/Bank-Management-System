#include"bank.h"
#include<iostream>
using namespace std;

void bank::readinfo()
{
    for (int i = 0; i < 7; i++)
    {
        a[i].getinfo();
    }
}

void bank::displayinfo()
{
    for (int i = 0; i < 7; i++)
    {
        a[i].showinfo();
    }
}

bool bank::find()
{
    int id;
    cout << "Enter the account id: ";
    cin >> id;
    bool found = false;
    for (int i = 0; i < 7 && found == false; i++)
    {
        if (a[i].getid() == id)
        {
            found = true;
            a[i].showinfo();
        }
    }
    if (!found)
    {
        cout << "Account not found" << endl;
    }
    return found;
}

void bank::deposit()
{
    int id;
    cout << "Enter the account id: ";
    cin >> id;
    bool found = false;
    for (int i = 0; i < 7; i++)
    {
        if (a[i].getid() == id)
        {
            found = true;
            a[i].deposit();
        }
    }
    if (!found)
    {
        cout << "Account not found" << endl;
    }
}

void bank::withdraw()
{
    int id;
    cout << "Enter the account id: ";
    cin >> id;
    bool found = false;
    for (int i = 0; i < 7; i++)
    {
        if (a[i].getid() == id)
        {
            found = true;
            a[i].withdraw();
        }
    }
    if (!found)
    {
        cout << "Account not found" << endl;
    }
}

void bank::getHighestBalanceAccount()
{
    int highestIndex = 0;
    double highestBalance = a[0].getBalance();
    
    for (int i = 1; i < 7; i++)
    {
        if (a[i].getBalance() > highestBalance)
        {
            highestBalance = a[i].getBalance();
            highestIndex = i;
        }
    }
    
    cout << "\nAccount with highest balance:\n";
    a[highestIndex].showinfo();
}

double bank::getTotalDeposits()
{
    double total = 0;
    for (int i = 0; i < 7; i++)
    {
        total += a[i].getBalance();
    }
    return total;
}

void bank::checkBalance()
{
    int id;
    cout << "Enter the account id: ";
    cin >> id;
    bool found = false;
    for (int i = 0; i < 7; i++)
    {
        if (a[i].getid() == id)
        {
            found = true;
            cout << "Account balance: " << a[i].getBalance() << endl;
            break;
        }
    }
    if (!found)
    {
        cout << "Account not found" << endl;
    }
}
