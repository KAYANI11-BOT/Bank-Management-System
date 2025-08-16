#include"account.h"
class bank
{
    public:
        void readinfo();
        void displayinfo();
        void deposit();
        void withdraw();
        bool find();
        void getHighestBalanceAccount();
        double getTotalDeposits();
        void checkBalance();
    private:
        account a[7];      

};


