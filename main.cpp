#include <iostream>
#include "bank.h"
using namespace std;
int main()
{
bank b;
int ch;
 do
 { 
        cout<<"---------------------------------------"<<endl;
        cout<< "Welcome to the Bank Management System" << endl;
        cout<<"---------------------------------------"<<endl;
        cout << "Please select an option from the menu below:" << endl;
        cout << "1. Read account information" << endl;
        cout << "2. Display account information" << endl;
        cout << "3. Deposit money" << endl;
        cout << "4. Withdraw money" << endl;
        cout << "5. Find account by ID" << endl;
        cout << "6. Get account with highest balance" << endl;
        cout << "7. Get total deposits in all accounts" << endl;
        cout << "8. Check balance of an account" << endl;
        cout << "9. Exit" << endl;
        cout << "Please choose an option:" << endl;
        cin >> ch;
        
        if(ch==1)
        {
            b.readinfo();
        }
        else if(ch==2)
        {
            b.displayinfo();
        }
        else if(ch==3)
        {
            b.deposit();
        }
        else if(ch==4)
        {
            b.withdraw(); 
        }
        else if(ch==5)
        {
            b.find();
        }
        else if(ch==6)
        {
            b.getHighestBalanceAccount();
        }
        else if(ch==7)
            {
                double total = b.getTotalDeposits();
                cout << "Total amount deposited in all accounts: " << fixed << static_cast<long long>(total) << endl;
            }
        else if(ch==8)
        {
            b.checkBalance();
        }
        
    }
      while (ch != 8);
      cout<<"Exiting...."<<endl;
      return 0;
}
    


// to run this code, you need to compile it using the following command:
// g++ main.cpp account.cpp bank.cpp -o main
// ./main
