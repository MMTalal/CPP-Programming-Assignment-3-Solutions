#include <iostream>  // Include the input-output stream library for using cin (to take input) and cout (to display output)
using namespace std; // Use the standard namespace to avoid writing std:: before cin, cout, endl, etc.

int main() {  // The main function where the program execution starts
    // Display the assignment title and instructions to the user
    cout << "This is Assignment No. 6;" << endl
         << endl;
    cout << "Write a program to take a number and find a list of non-prime numbers from 1 to this number." << endl << endl;
    
    // Prompt the user to input the number
    cout << "Input your number to find non-prime numbers from 1 to it: " << endl;
    int num;  // Declare a variable to store the number entered by the user
    cin >> num;  // Take input from the user and store it in the variable 'num'

    
    // Outer loop: Iterate through numbers from 1 to n
    for (int i = 1; i <= num; i++) {
        int count = 0; // Initialize a counter to count the number of divisors of the current number (i)

        // Inner loop: Check for divisors of the current number (i)
        for (int j = 1; j <= i; j++) {
            // If j is a divisor of i (i.e., i is divisible by j)
            if (i % j == 0) {
                count++; // Increment the divisor count
            }
        }

        // Check if the number is NOT a prime number
        // A prime number has exactly 2 divisors (1 and itself), so if count is not 2, it's not prime
        if (count != 2) {
            cout << i << endl; // Print the non-prime number
        }
    }

    return 0; // Indicate that the program executed successfully
}