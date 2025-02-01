#include <iostream>  // Include the input-output stream library for using cin and cout
using namespace std; // Use the standard namespace to avoid writing std:: before cin and cout

int main() {  // The main function where the program execution starts
    cout << "This is Assignment No. 2;" << endl
        << endl;
    cout << "Write a program to take 2 integers from the user and find the Greatest Common Divisor of two numbers." << endl;

    // Prompt the user to input the first number
    cout << "Please input your first number: " << endl;
    int num1;  // Declare a variable 'num1' to store the first number
    cin >> num1;  // Take the first number as input from the user and store it in 'num1'

    // Prompt the user to input the second number
    cout << "Please input your second number: " << endl;
    int num2;  // Declare a variable 'num2' to store the second number
    cin >> num2;  // Take the second number as input from the user and store it in 'num2'

    int GCD = 1;  // Declare and initialize a variable 'GCD' to store the greatest common divisor
    // Start with GCD = 1 because 1 is the smallest possible GCD for any two numbers

    // Loop from 1 to the smaller of the two numbers (num1 and num2)
    // The GCD cannot be greater than the smaller number, so we only need to loop up to min(num1, num2)
    for (int i = 1; i <= (min(num1, num2)); i++) {
        // Check if 'i' divides both num1 and num2 without leaving a remainder
        if (num1 % i == 0 && num2 % i == 0) {
            GCD = i;  // If 'i' divides both numbers, update GCD to 'i'
            // This ensures that GCD always holds the largest common divisor found so far
        }
    }

    // After the loop ends, print the GCD
    cout << GCD;

    return 0;  // Return 0 to indicate that the program executed successfully
}