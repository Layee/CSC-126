#include <iostream>
#include <cmath>
using namespace std;

/*
void printStar();
int addThem(int,int);


int main() {
    int num1,
        num2;

    cout << "Enter the first number : ";
    cin >> num1;

    cout << "Enter the second number : ";
    cin >> num2;

    addThem (num1,num2);

    for (int i = 0; i < addThem(num1,num2); i++) {
        printStar();
    }

}





void printStar(){
    cout << "*****"<<endl;
}


int addThem(int numOne,int numTwo){

    return numOne + numTwo;
}
*/

const int M = 10;
const int N = 10;
for (int i = 0; i < M; i++) {
     for (int j = 1; j < N; j++) {
        cout << M * (i-1) + j;
     }
}
