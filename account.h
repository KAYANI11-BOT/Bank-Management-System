#include<string>
using namespace std;

class account
{
    public:
        void getinfo();
        void showinfo();
        void deposit();
        void withdraw();
        int getid()
        {
            return id;
        }       
        double getBalance()
        {
            return balance;
        }
        
    private:
        int id;
        string name;
        double balance;
};


