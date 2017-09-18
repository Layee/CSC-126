#include <iostream>
#include<ctime>

using namespace std;


int main () {

int userInput,
    correctNumber = 21;


/*
    do {

        cout << " Please Guess the correct number between 1 to 100: ";
       cin >> userInput;

       if (userInput == correctNumber){
           cout << "You got the  number right"<< endl;
           cout <<"the magical number was "<<correctNumber <<endl;
       }  else {
             cout << "Please Try again"<<endl;
         }

    } while (userInput != correctNumber);

*/

int i = 2;
int temp = 1;
while (i < 10){
    temp = temp * (i-1);
    i = i + 1;
}

cout << " i is " <<i <<endl;
cout << " temp is " <<temp <<endl;

  return 0;

}
