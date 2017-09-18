#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   double check,customerPaid,change,smallCoin,quarter = 0.25, dime = 0.10,nickel = 0.05;
    int dollarBill,penny, tmp;


    cout << "Enter the amount check:"<<endl;
    cin >> check;
    cout <<fixed << setprecision(2)<<"Enter the amount customer paid:"<<endl;
    cin >> customerPaid;
    change = customerPaid - check;
    dollarBill= change / 1.00;
    cout << " The change is:$"<<change <<endl;
    cout <<dollarBill << " dollar bills"<<endl;
    smallCoin = change - int(change);
    tmp = smallCoin / quarter;
    cout << tmp << " Quarter'(s)'" <<endl;
    smallCoin -= tmp * quarter;
    tmp = smallCoin / 0.10;
    smallCoin -= tmp * 0.10;
    cout << "dime " << tmp << endl;

    tmp = smallCoin / nickel;
    smallCoin -= tmp * 0.05;
    cout << "nickel is " <<tmp << endl;
    cout << smallCoin << endl;
    tmp = smallCoin * 100;
    cout << "Pennies is " << tmp << endl;


return (0);




}
