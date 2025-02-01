#include <iostream>  // Include the input-output stream library
using namespace std;

int main() {
    // Display assignment details
    cout << "This is Assignment No. 17;" << endl << endl;
    cout << "Write a program to input elements in an array then print all unique elements in the array." << endl;
    
    // Ask the user to input the size of the array
    cout << "What size do you want for the array? " << endl;
    int n;  // Variable to store the size of the array
    cin >> n;  // Take user input for array size
    
    // Validate user input to ensure it is a positive number
    if (n < 0) 
    {
        cout << "The number " << n << " you entered is incorrect! Please enter a positive number." << endl;
        return 1;  // Exit the program if an invalid size is entered
    }
    
    int arr[10000];  // Declare an array with a maximum size of 10,000
    cout << "Input array element: ";
    
    // Loop to take input for the array elements
    for(int i = 0; i < n; i++) 
    {
        cin >> arr[i];  // Read user input into the array
    }
    
    // Print unique elements
    cout << "All unique elements in the array are: ";

    // Loop through each element in the array to find unique elements
    for(int i = 0; i < n; i++)  // Outer loop: Iterate through each element
    {
        bool flag = true;  // Flag to track if the current element is unique

        // Inner loop: Compare the current element with all other elements
        for (int j = 0; j < n; j++)
        {   // Check if the current element has a duplicate
            if (i != j && arr[i] == arr[j])              // We don't compare an element with itself and We correctly identify duplicates.
            {
                flag = false;  // Mark as not unique if a duplicate is found
                break;  // Exit the inner loop early
            }
        }
        
        // If the element is unique, print it
        if (flag) 
        {
            cout << arr[i] << " ";  // Print the unique element
        }
    }

    cout << endl;  // Print a newline for better formatting
    return 0;  // End of the program
}