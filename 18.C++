#include <iostream>  // Include the input-output stream library for input and output operations
using namespace std;

int main() {
    // Displaying assignment details to inform the user about the purpose of the program
    cout << "This is Assignment No. 18;" << endl << endl;
    cout << "Write a program to input elements in an array and find two numbers whose sum equals the last element in the array." << endl;
    
    int n;  // Variable to store the size of the array
    cout << "Enter the size of the array: ";  // Prompt user to input array size
    cin >> n;
    
    if (n < 2)  // Validate array size
    {
        cout << "Array size must be at least 2." << endl;
        return 1;  // Exit the program if the size is invalid
    }
    
    else
    {
        int arr[n];  // Declare an array with the user-specified size
        cout << "Input " << n << " elements in the array: ";  // Prompt user to input array elements
        
        // Loop to take input for the array elements
        for(int i = 0; i < n; i++) 
        {
            cin >> arr[i];  // Read user input into the array
        }
        
        bool found = false;  // Boolean flag to track if a matching pair exists
        
        // Display the target sum (last element in the array)
        cout << "Array pairs whose sum equals " << arr[(n-1)] << ":" << endl; // ex. if arr[10] .. the last index should be arr[9] by using index
        
        // Outer loop: Iterate through each element in the array
        for(int i = 0; i < (n-1); i++)  // Only check up to the second last element
        {
            // Inner loop: Compare the current element with all subsequent elements in the array
            for(int j = i+1; j < (n-1); j++)  // Start from i+1 to avoid duplicate pairs
            {
                // Check if the sum of the current pair equals the last element in the array
                if ((arr[i] + arr[j]) == arr[(n-1)])  
                {  
                    // If a matching pair is found, print the pair and their sum
                    cout << arr[i] << " , " << arr[j] << endl;
                    // cout << arr[i] << " + " << arr[j] << " = " << arr[(n-1)] << endl;
                    
                    found = true;  // Set flag to true if a pair is found
                }
            }
        }   
    
        // If no pair was found, print a message
        if (!found) 
        {
            cout << "No pairs found with sum equal to " << arr[(n-1)] << "." << endl;
        }
    }
    return 0;  // Indicate successful program execution
}