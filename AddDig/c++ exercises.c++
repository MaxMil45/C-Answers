#include <iostream>  // Include the iostream library for input/output
using namespace std;  // Use the standard namespace

int main() {
    int number, sum = 0, remainder;  // Declare an integer variable to store the number and the sum of its digits
    cout << "Enter an integer: " << endl;  // Ask the user to enter an integer
    cin >> number;  // Read the integer from the user

    while( number > 0){
        remainder = number % 10;
        sum = sum + remainder;
        number = number / 10;
    }
    cout << "Sum of digits: " << sum << endl;  // Output the sum of the digits
    return 0;  // Indicate that the program ended successfully
}
