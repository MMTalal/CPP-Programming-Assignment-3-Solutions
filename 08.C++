#include <iostream> // Include the iostream library for input and output operations.
using namespace std; // Use the standard namespace to avoid prefixing std:: with every standard function.

// Main function where program execution begins.
int main() {
    // Display the assignment title and program description.
    cout << "This is Assignment No. 8;" << endl
         << endl;
    cout << "Write a program to input elements in an array from the user and count even and odd elements in the array." << endl;

    int arr[10]; // Declare an array of size 10 to store user input.
    cout << "input array: "; // Display to input array.
    // Loop to collect input values from the user for each array element.
    for(int i = 0; i < 10; i++) 
    {
        cin >> arr[i]; // Read the input value for the current element.
    }

    int even = 0; // Counter for even numbers in the array.
    int odd = 0; // Counter for odd numbers in the array.

    // Loop to iterate through the array and classify each element as even or odd.
    for (int i = 0; i < 10; i++) 
    {
        if (arr[i] % 2 == 0) 
        { 
            even++; // Increment the even number counter.
        } 
        else
        {
            odd++; // Increment the even number counter.
        }
    }

    // Display the result, summarizing the counts of even and odd elements in the array.
    cout << "Total even elemnts: " << even << endl << "Total odd elemnts: " << odd << endl;
    
    return 0; // Return 0 to indicate successful program termination.
}