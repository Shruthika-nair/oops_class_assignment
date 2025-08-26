//Find the sum of the first n natural numbers.

#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0;
    cout<< " Enter a number:";
    cin >> num;

    for(int i = 1 ; i<= num ; i++ ){
        sum += i;
    }
    
    cout << " The sum of the first" << num << " natural number is " << sum << endl;

    return 0 ;
}