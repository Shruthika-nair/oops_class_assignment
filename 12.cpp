//Find the roots of a quadratic equation ax2 + bx + c = 0. (Handle real and
//imaginary roots using if-else.)

#include <iostream>
#include <cmath>

using namespace std;
int main (){
    float a ;
    float b;
    float c;
    int num;
    float root1;
    float root2;

    cout<<"Enter the coefficient of the Quadratic Equation ax^2 + bx : ";
    cin>> a >> b >> c ;
    num = (b*b) - ( 4*a*c);
    
    if( num > 0){
        root1 = ( -b+ sqrt(num)) / (2*a);
        root2 = ( -b + sqrt(num)) / (2*a);

        cout<<"The roots are real and distinct and are " << root1 <<"and" << root2;

    }
    else if( num == 0){
        root1= (-b+sqrt(num)) / (2*a) ;
        cout<< "The roots are real and equal and are " << root1 << "and" << root2;
    }
    else{
        int num1 = -num;
        cout<<"The roots are imaginary real part :" << -b/(2*a) << "+-" << sqrt(num1)/ (2*a) << "i" << endl;
    }
    return 0;
}