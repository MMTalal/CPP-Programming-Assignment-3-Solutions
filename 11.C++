#include <iostream> // Include the iostream library for input and output operations.
using namespace std; // Use the standard namespace to avoid prefixing std:: with every standard function.

// Main function where program execution begins.
int main() {
    // Display the assignment title and description.
    cout << "This is Assignment No. 11;" << endl << endl;
    cout << "Write a program to take 10 numbers from the user and find the second max." << endl;

    int arr[10]; // Declare an integer array of size 10 to store user inputs.

    // Prompt user to input 10 elements into the array.
    cout << "Input elements in array: ";
    for(int i = 0; i < 10; i++) 
    {
        cin >> arr[i]; // Read and store each element in the array.
    }
    
    // Initialize max1 and max2 to store the first and second maximum values.
    int max1 = INT64_MIN; // Variable to store the maximum number found in the array.
    int max2 = INT64_MIN; // Variable to store the second maximum number.
    
    // First loop: Find the maximum value in the array.
    for (int i = 0; i < 10; i++) 
    {
        if (max1 < arr[i])  // If the current element is greater than max1, update max1.
        { 
            max1 = arr[i];  // assign first maximum number to max1
        }
    }
    
    // Second loop: Find the second largest number.
    // The logic in this loop has an issue: it stops when `arr[i] == max1`, which may cause errors.
    for (int i = 0; (arr[i] != max1); i++) // Ensure we are not selecting the max1 value again as a condiation in for loop
    {
        if ( max2 < arr[i]) // If the current element is greater than max2, update max2.
        {
            max2 = arr[i]; // assign second maximum number to max2
        }
    }
    
    // another way
    /*
     for (int i = 0; i < 10; i++) 
     {
        if (arr[i] != max1 && arr[i] > max2) 
        {   // Ensure we are not selecting the max1 value again.
            max2 = arr[i]; // Update max2 if the current element is greater than max2.
        }
    }
    */
    
   // Output the second largest number in the array.
    cout << max2 << endl;

    return 0; // Indicate successful program termination.
}
