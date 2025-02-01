#include <iostream> // Include the iostream library for input and output operations.
using namespace std; // Use the standard namespace to avoid prefixing std:: with every standard function.

// Main function where program execution begins.
int main() {
    // Display the assignment title and program description.
    cout << "This is Assignment No. 9;" << endl
         << endl;
    cout << "Write a program to input elements in an array and search whether an element exists in the array or not." << endl;

    int arr[10]; // Declare an array of size 10 to store user input.
    cout << "Input elements in array: ";
    // Loop to collect input values from the user for each array element.
    for(int i = 0; i < 10; i++)
    {
        cin >> arr[i]; // Read the input value for the current element.
    }
    
    cout << "Element: "; // Prompt the user to enter the element to search.
    int n; // Variable to store the element to be searched.
    cin >> n; // Read the element to search.
    
    bool found = false; // Flag to track if the element is found in the array.

    // Loop to iterate through the array and search for the element.
    for (int i = 0; i < 10; i++)
    {
        if (n == arr[i]) // Check if the current element matches the search element.
        {   // Display the index where the element is found.
            cout << "Element found at index " << i << endl;
            found = true; // Set the flag to true as the element is found.
        }
    }
    // If the element is not found after the loop, display a message.
    if (!found) 
    {
        cout << "Element not found in the array." << endl;
    }


    return 0; // Return 0 to indicate successful program termination.
}