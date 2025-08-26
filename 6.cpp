//Write a program to print the multiplication table of a given number using
// a for loop.

#include <iostream>
using namespace std;

int main() {
    int num;
    cout<< "Enter  a number";
    cin>> num;

    cout<< "Multioliaction table of" << num  << endl;

    for(int i = 1 ; i<= 10 ; i++){
        cout << num << " X " << i << " = " << num * i << endl;

    }

    return 0 ;

 
}