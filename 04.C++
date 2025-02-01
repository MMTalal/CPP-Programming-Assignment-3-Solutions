#include <iostream>  // Include the input-output stream library for using cin and cout
using namespace std; // Use the standard namespace to avoid writing std:: before cin and cout

int main() {  // The main function where the program execution starts
    // Display the assignment title and instructions
    cout << "This is Assignment No. 4;" << endl
         << endl;
    cout << "Write a program to print a hollow right triangle star pattern series using loops." << endl << endl;
    
    // Prompt the user to input the number of rows for the star pattern
    cout << "Input the number of rows for the star triangle: " << endl;
    int num;
    cin >> num;
    
    // Outer loop to control the number of rows in the pattern
    for (int i = 1; i <= num; i++)
    {
        // Inner loop to control the number of columns in each row
        for (int j = 1; j <= i; j++)
        {
            // Check if the current position is on the border of the triangle
            if (j == 1 || i == num || i == j)
            {
                // Print a star for the border positions
                cout << " * ";
            }
            else
            {
                // Print spaces for the inner positions to create the hollow effect
                cout << "   ";
            }
        }
        // Move to the next line after printing each row
        cout << endl;
    }

    return 0;  // Return 0 to indicate that the program executed successfully
}