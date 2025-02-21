#include <iostream>  
using namespace std; 

int main() {
    int number, sum = 0, remainder;  
    cout << "Enter an integer: " << endl;  
    cin >> number;  

    while( number > 0){
        remainder = number % 10;
        sum = sum + remainder;
        number = number / 10;
    }
    cout << "Sum of digits: " << sum << endl;  
    return 0;
}
