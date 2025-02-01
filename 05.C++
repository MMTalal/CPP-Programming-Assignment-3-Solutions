#include <iostream>  // Include the input-output stream library for using cin (to take input) and cout (to display output)
using namespace std; // Use the standard namespace to avoid writing std:: before cin, cout, endl, etc.

int main() {  // The main function where the program execution starts
    // Display the assignment title and instructions to the user
    cout << "This is Assignment No. 5;" << endl
         << endl;
    cout << "Write a program to print an inverted right triangle star pattern series using loops." << endl << endl;
    
    // Prompt the user to input the number of rows for the star pattern
    cout << "Input the number of rows for the star triangle: " << endl;
    int num;  // Declare a variable to store the number of rows entered by the user
    cin >> num;  // Take input from the user and store it in the variable 'num'

    // Outer loop to control the number of rows in the pattern
    // This loop runs from the number of rows (num) down to 1
    for (int i = num; i >= 1; i--)
    {
        // Inner loop to control the number of columns in each row
        // This loop runs from 1 to the current row number (i)
        for (int j = 1; j <= i; j++)
        {
            // Print a star for each column in the current row
            cout << "*";
        }
        // Move to the next line after printing all columns in the current row
        // This ensures that the next row starts on a new line
        cout << endl;
    }

    return 0;  // Return 0 to indicate that the program executed successfully
}