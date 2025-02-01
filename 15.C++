#include <iostream> // Include the iostream library for input and output operations.
using namespace std; // Use the standard namespace to avoid prefixing std:: with every standard function.

// Main function: Entry point of the program.
int main() {
    // Display the purpose of the program to the user.
    cout << "This is Assignment No. 15;" << endl << endl;
    cout << "Given an array of integers, return a new array with each value doubled." << endl;

    // Prompt the user to enter the size of the array.
    cout << "What size do you want for the array? " << endl;
    int n;  // Variable 'n' will store the size of the array provided by the user.
    cin >> n; // Read the size of the array from the user.
    
    // Validate user input to ensure the array size is non-negative.
    if (n < 0)
    {
        // Display an error message and terminate execution for invalid input.
        cout << "The number " << n << " you entered is incorrect! Please enter a positive number." << endl;
    }
    else 
    {
        int arr[10000]; // Declare an array of size 10000 to store user input. This size is large enough for most use cases.

        // Prompt the user to input the elements of the array.
        cout << "Input elements in array: ";
        
        // Loop through the array to read and store user input.
        for(int i = 0; i < n; i++) 
        {
            cin >> arr[i]; // Read each element from the user and store it in the array.
            arr[i] = arr[i] * 2; // Double the value of the current element and store it back in the array.
        } 

        // Display the transformed array with each element doubled.
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " "; // Print each doubled element.
        }
        cout << endl; // Print a newline for better formatting.
    }
    
    return 0; // End of program. Return 0 to indicate successful execution.
}