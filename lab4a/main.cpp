/*************************************************************************************************************
Name: Abraham Swaray
Professor : Sandra Nevins
Date : March 9, 2016
Lab4a: Factorial of a number and non negative
***************************************************************************************************************/

#include <iostream>
using namespace std;

int main() {

	int number, increment, factorial = 1; // get number from user, increment it in while loop, factor it out

	cout << "Enter a positive number" << endl;
	cin >> number; // get the user number


	if (number <= -1) { // tell the user negative number are not allow
		cout << " Please Enter positive number only \n " << number << " is not a positive number " << endl;
	}
	else if (number >= 0) { // if the user number is greater than 0, run the for loops and spit outs the factor of the user input
		for (increment = 1; increment <= number; increment++) {
			factorial *= increment;
		}

		cout << "Factorial of " << number << " = " << factorial << endl; // print out the factor
	}


	return 0;
}


/*


Enter a positive number
1
Factorial of 1 = 1

Process returned 0 (0x0)   execution time : 3.053 s
Press any key to continue.





Enter a positive number
0
Factorial of 0 = 1

Process returned 0 (0x0)   execution time : 2.685 s
Press any key to continue.


Enter a positive number
-8
Please Enter positive number only
-8 is not a positive number

Process returned 0 (0x0)   execution time : 2.481 s
Press any key to continue.










*/
