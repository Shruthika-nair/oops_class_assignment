// Read three integers and print the largest number.

#include <iostream>
using namespace std;

int main(){
    int num1;
    int num2;
    int num3;

    cout << " enter number 1 :" << endl;
    cin >> num1 ;

    cout << " enter number 2 :" << endl;
    cin >> num2;

    cout << " enter number 3 :" << endl;
    cin >> num3;

    if(num1 >= num2 && num1 >= num3){
        cout<< "The largest number is :" << num1 << endl;

    } 
    else if( num2>= num1 && num2>= num3){
        cout<<"The largest number is "<< num2 << endl;
        
    }
    else {
        cout << "The largest number is :" << num3 << endl;
        
    }

    return 0 ;



}