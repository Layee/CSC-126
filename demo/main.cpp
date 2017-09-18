#include <iostream>
#include <cmath> // access to the c++ Math library
#include <string> // Access to the string library
#include <iomanip> // Access to the fixed,showpoint, and setprecision library
 using  namespace std;

int main ()  {
    double first, second;
	int temp;
	string message;

	first = 2.5;
	second = 4.0;
	cout << fixed << showpoint <<setprecision(2); // add two decimal point at the end of the number

cout <<  (pow(first, second)) <<endl; // raise first and second to the power
cout << (pow(second, first)) <<endl; // raise second and first to the power
temp = static_cast<int>(pow(second, 1.5));
cout << temp << endl;
cout << sqrt (56.25) <<endl; // square root of 56.35
cout << static_cast <int> (sqrt(pow(first, temp ))) <<endl;
message = "Predefined function simplify programming code!";
cout << "The Message length is : = " << message.length() <<endl; // the message length
return 0;

}

