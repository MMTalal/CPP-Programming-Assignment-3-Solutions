#include <iostream>  // Include the input-output stream library for input and output operations
using namespace std;

int main() {
    // Displaying assignment details to inform the user about the purpose of the program
    cout << "This is Assignment No. 19;" << endl << endl;
    cout << "Write a CPP program to delete an element from an array at a specified position." << endl;

    int arr[100];  // Declare an array with a maximum size of 100 to store elements

    // Prompt the user to input the size of the array
    cout << "Enter the size of the array: ";
    int n; // Variable to store the current size of the array
    cin >> n;

    // Validate the array size to ensure it is within the allowed range
    if (n <= 0 || n > 100) 
    {
        cout << "Invalid array size! Size must be between 1 and 100." << endl;
        return 1;  // Exit the program if the size is invalid
    }

    // Prompt the user to input array elements
    cout << "Enter " << n << " elements in the array: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];  // Read user input into the array
    }

    // Prompt the user to input the element to delete
    int elementToDelete;
    cout << "Enter the element to delete: ";
    cin >> elementToDelete;

    // Find the index of the element to delete
    int indexToDelete = -1;  // Initialize to -1 (element not found)
    
    // Loop through the array to search for the element to delete
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == elementToDelete) 
        {
            indexToDelete = i;  // Store the index of the element to delete
            break;              // Exit the loop once the element is found
        }
    }

    // If the element is found, delete it
    if (indexToDelete != -1) 
    {
        // Shift all elements after the deleted element one position to the left
        for (int i = indexToDelete; i < n - 1; i++) 
        {
            arr[i] = arr[i + 1];  // Move each element one position to the left
        }

        n--;  // Reduce the size of the array after deletion

        // Display the updated array
        cout << "Array elements: ";
        for (int i = 0; i < n; i++) 
        {
            cout << arr[i] << " ";  // Print each element of the updated array
        }
        cout << endl;
    } 
    else 
    {
        // If the element is not found, display a message
        cout << "Element not found in the array." << endl;
    }

    return 0;  // Indicate successful program execution
}