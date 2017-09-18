#include <iostream>

using namespace std;

//void Find (int& a, int b, int& c);
void tryMe(int& v);
int main()
{

  int x = 8;
  for (int Count = 1; Count < 5; Count++) {
     tryMe(x);
  }











     /*
    int one = 1, two = 2, three = 3;

    Find(one, two, three);
    cout << one  << "," << two << "," << three << ","<<endl;

    Find(two, one, three);
    cout << one  << "," << two << "," << three << ","<<endl;

     Find(three, two, one);
     cout << one  << "," << two << "," << three << ","<<endl;

      Find(two, three, one);
    cout << one  << "," << two << "," << three << ","<<endl;

    */

    return 0;
}
/*
void Find (int& a, int b, int& c) {
    int temp;
    c = a * b +2;
    temp = c;
    if (b==0) {
        a = c / (b + 1);
        a = a + c - b;
        c = b * temp;
    }
}



*/

void tryMe(int& v) {
    static int num = 2;

    if (v % 2 == 0) {
        num++;
        v = v + 3;
    }  else {
        num--;
         v = v + 5;
    }
     cout << v << "" << num << endl;

}
