#include <iostream>  // Include the input-output stream library for using cin and cout
using namespace std; // Use the standard namespace to avoid writing std:: before cin and cout

int main() {  // The main function where the program execution starts
    // Display the assignment title and instructions
    cout << "This is Assignment No. 3;" << endl
         << endl;
    cout << "Write a program to print a right triangle number pattern series using loops." << endl << endl;
    
    // Prompt the user to input the number of rows for the pattern
    cout << "input the number of pattern you want: " << endl;
    int num;  // Declare a variable to store the number of rows entered by the user
    cin >> num;  // Take input from the user and store it in the variable 'num'

    // Outer loop to control the number of rows in the pattern
    // This loop runs from 1 to the number of rows specified by the user
    for (int i = 1; i <= num; i++)
    {
        // Inner loop to control the number of columns in each row
        // This loop runs from 1 to the current row number (i)
        for (int j = 1; j <= i; j++)
        {
            // Print the current value of i (row number)
            // This creates a pattern where each row contains the same number repeated multiple times
            cout << i;
        }
        // Move to the next line after printing all columns in the current row
        // This ensures that the next row starts on a new line
        cout << endl;
    }
    
    /*
    The above code generates the following pattern:
    1
    22
    333
    4444
    55555
    */
    
    /*
    If you replace 'i' with 'j' in the cout statement (i.e., cout << i;),
    the pattern will change to:
    1
    12
    123
    1234
    12345
    */

    return 0;  // Return 0 to indicate that the program executed successfully
}