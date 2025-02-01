#include <iostream>  // Include the input-output stream library to allow input and output operations
using namespace std; // Use the standard namespace to avoid prefixing standard functions with 'std::'

int main() {
    // Displaying assignment details to inform the user about the purpose of the program
    cout << "This is Assignment No. 20;" << endl << endl;
    cout << "Write a program to print an equilateral triangle or Pyramid star pattern series of n rows using a loop." << endl;

    cout << "Enter the number of rows: ";
    int n; // Number of rows for the pyramid
    cin >> n;

    // Loop to control the number of rows in the pyramid (5 rows in this case)
    for (int i = 1; i <= n; i++) 
    {
        // Inner loop to print spaces before stars
        // The number of spaces decreases as we go down each row
        // This is necessary to center-align the stars and form a symmetrical pyramid
        for (int j = 1; j <= n - i; j++) 
        {
            cout << " "; // Print a space to push the stars towards the center
        }

        // Inner loop to print stars in each row
        // The number of stars increases by 2 for each row, following the formula (2 * i - 1)
        for (int k = 1; k <= (2 * i - 1); k++) 
        {
            cout << "*"; // Print a star
        }

        // Move to the next line after printing spaces and stars for the current row
        cout << endl;
    }

    return 0;  // Indicate successful program execution
}
