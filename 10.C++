#include <iostream> // Include the iostream library for input and output operations.
using namespace std; // Use the standard namespace to avoid prefixing std:: with every standard function.

// Main function where program execution begins.
int main() {
    // Display the assignment title and description.
    cout << "This is Assignment No. 10;" << endl << endl;
    cout << "Write a C++ program to count the number of occurrences of a given number in an array of integers." << endl;

    int arr[10]; // Declare an integer array of size 10 to store user inputs.

    // Prompt user to input 10 elements into the array.
    cout << "Input elements in array: ";
    for(int i = 0; i < 10; i++) 
    {
        cin >> arr[i]; // Read and store each element in the array.
    }

    // Prompt user to enter the element to search for.
    cout << "Input: ";
    int n; // Variable to store the target number.
    cin >> n;

    bool occ = false; // Boolean flag to check if the number exists in the array.
    int count = 0;    // Counter to track occurrences of the number.

    // Loop through the array to check for occurrences of the given number.
    for (int i = 0; i < 10; i++) 
    {
        if (arr[i] == n) 
        {   // Compare each element with the target number.
            count++;        // Increment count when a match is found.
            occ = true;     // Set flag to true indicating at least one occurrence.
        }
    }

    // Display the result based on the occurrences.
    if (occ) // Corrected condition from 'if (occ = true)' to 'if (occ)'
    {
        cout << "Number of occurrences of " << n << " : " << count << endl;
    } 
    else 
    {
        cout << "The number " << n << " is not present in the array." << endl;
    }

    return 0; // Indicate successful program termination.
}