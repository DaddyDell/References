#include <iostream>

using namespace std;

void regCheck(int x, int y);
void hackCheck(int& x,int& y);

int main()
{
    int originalFunds = 150;
    int balanceCheck = 1000;
    cout << "Original values\n";
    cout << "Original Funds: " << originalFunds << endl;
    cout << "Balance: " << balanceCheck << endl;
    
    cout << "\n\nCalling regCheck() via a transaction\n";
    regCheck(originalFunds,balanceCheck);
    cout << "Transaction: " << originalFunds << endl;
    cout << "Balance: " << balanceCheck << endl;
    
    cout << "Calling hackCheck()\n";
    hackCheck(originalFunds,balanceCheck);
    cout << "Transaction: " << originalFunds << endl;
    cout << "Balance: " << balanceCheck << endl;
    return 0;
}
void regCheck(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}
void hackCheck(int& x, int& y)
{
    int temp = x;
    x = y;
    y = temp;
}
