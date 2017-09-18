/*
  Name: Abraham Swaray
  Professor: Sandra Nevins
  Csc 126
  Lab: Coffee Shop
  Description:


*/
#include <iostream>
#include <iomanip>
#include <cmath>

void traceMe(double x, double y);

using namespace std;


int main() {

	double one, two;

	cout << "Enter two numbers follow by space " << endl;
	cin >> one >> two;


	traceMe(one, two);
	traceMe(two, one);


	return 0;
}


void traceMe(double x, double y) {

	double z;
	if (x != 0) {
		z = sqrt(y) / x;
		cout << "Testing the value of z" << z << endl;
	}
	else {
		cout << "Enter a nonezero number:" << endl;
		cin >> x;
		z = floor(pow(y, z));

	}

	cout << fixed << showpoint << setprecision(2) << endl;
	cout << " X " << x << " Y " << y << " z " << z << endl;

}
