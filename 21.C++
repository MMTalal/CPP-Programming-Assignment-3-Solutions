#include <iostream>  // Include input-output stream library for handling input and output operations
using namespace std; // Use the standard namespace to simplify code (avoiding std:: prefix)

int main() {
    // Displaying assignment details to inform the user about the purpose of the program
    cout << "This is Assignment No. 21;" << endl << endl;
    cout << "Write a program to print a rhombus star pattern of N rows using a loop." << endl;
    
    // Prompt the user to enter the number of rows
    cout << "Enter number of rows: ";
    int n; // Declare an integer variable to store the number of rows for the rhombus
    cin >> n; // Read user input and store it in the variable 'n'

    // Outer loop to iterate through each row (controls height of the rhombus)
    for (int i = 1; i <= n; i++) 
    {
        // Inner loop to print leading spaces before stars
        // The number of spaces decreases as the rows progress, to align stars properly
        for (int j = 1; j <= n - i; j++) 
        {
            cout << " ";  // Print a single space to push stars to the right
        }

        // Inner loop to print stars in each row
        // The number of stars is always equal to 'n' to form a rhombus shape
        for (int k = 1; k <= n; k++) 
        {
            cout << "*";  // Print a star without newline to form a continuous line
        }

        cout << endl;  // Move to the next line after printing one row of the rhombus
    }

    return 0;  // Indicate successful program execution
}
