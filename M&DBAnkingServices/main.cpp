#include <iostream>
#include <math.h> // sqrt
using namespace std;

// Name : Abraham Swaray
// Lab #1b - M & D Banking Services
// 2 - 8 - 16



int main()
{
   double currentMoneyAvailabe = 0; // Original Amount of Money
   int years = 0; // Amount of years
   double amountDeposited = 0; // Amount of money deposited
   int interestRate = 0; // the interest rate
   int newBalance = 0;



    cout << "Please Enter the original amount of money"<<endl;
    cin >> currentMoneyAvailabe; // get the original amount of money from the user
    cout << "Please enter the amount of years you wish to invest in t" << endl;
    cin >> years; // collect the amount of the year the user entered
    cout << "Please enter the interest rate"<<endl;
    cin >> interestRate;

    newBalance = amountDeposited * ((1.0 + interestRate/100)^years);





    return 0;
}
