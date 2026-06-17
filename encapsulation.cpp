#include <iostream>
using namespace std;

class bank
{
private:
    int bankBalance = 1000;

public:
    void getBankBalance()
    {
        cout << bankBalance << endl;
    }


    void deposite(int n)
    {
        bankBalance += n;
    }
};

int main()
{
    bank b1;
    b1.getBankBalance();
    b1.deposite(500);
    b1.getBankBalance();
    return 0;
}