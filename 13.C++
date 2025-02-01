#include <iostream> // Include the iostream library for input and output operations.
using namespace std; // Use the standard namespace to avoid prefixing std:: with every standard function.

// Main function where program execution begins.
int main() {
    // Display the assignment title and description.
    cout << "This is Assignment No. 13;" << endl << endl;
    cout << "Given a list of integers, determine whether the sum of its elements is odd or even." << endl;
    cout << "Give your answer as a string matching \"even\" or \"odd\"." << endl;
    
    // Prompt the user to enter the size of the array.
    cout << "What size do you want for the array? " << endl;
    int n;  // Variable to store array size
    cin >> n; // Read user input
    
    // Validate the input to ensure the array size is not negative.
    if (n < 0)
    {
        // Display an error message and terminate execution for invalid input.
        cout << "The number " << n << " you entered is incorrect! Please enter a positive number." << endl;
    }
    else 
    {
        int arr[10000]; // Declare an array of size 10000 (large enough for any reasonable input).

        // Prompt user to input 'n' elements into the array.
        cout << "Input elements in array: ";
        
        // Loop to read 'n' elements from the user and store them in the array.
        for(int i = 0; i < n; i++) 
        {
            cin >> arr[i]; // Read and store each element in the array.
        }
        
        int sum = 0; // Variable to store the sum of array elements.
        
        // Loop to calculate the sum of all elements in the array.
        for (int i = 0; i < n; i++)
        {
            sum = sum + arr[i]; // Accumulate the sum
        }
        
        // Check if the sum is even or odd and print the result accordingly.
        if (sum % 2 == 0) // No need to check `sum == 0` separately, as 0 is already even.
        {
            cout << "even" << endl; // Output "even" if sum is divisible by 2.
        }
        else
        {
            cout << "odd" << endl; // Output "odd" otherwise.
        }
    }
    
    return 0; // Indicate successful program termination.
}
