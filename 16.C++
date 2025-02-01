#include <iostream>  // Include the input-output stream library for input and output operations
using namespace std;

int main() {
    // Displaying assignment details to inform the user about the purpose of the program
    cout << "This is Assignment No. 16;" << endl << endl;
    cout << "You will be given an array of integers whose elements have both a negative and a positive value, except for one integer that is either only negative or only positive. Your task will be to find that integer." << endl;
    
    // Asking the user to input the size of the array
    cout << "What size do you want for the array? " << endl;
    int n;  // Declare a variable to store the array size
    cin >> n;  // Take user input for array size
    
    // Validating user input to ensure the size is positive
    if (n <= 0)  // Check if the user entered a non-positive number
    {
        cout << "The number " << n << " you entered is incorrect! Please enter a positive number." << endl;
        return 1;  // Exit the program with an error status
    }
    
    int arr[10000];  // Declare an array with a maximum size of 10,000 (assuming n does not exceed this limit)
    cout << "Input elements in array: ";  // Prompt user to input array elements
    
    // Loop to take input for the array elements
    for(int i = 0; i < n; i++) 
    {
        cin >> arr[i];  // Read user input into the array
    }
    
    bool flag = false;  // Boolean flag to track if a matching opposite number exists

    // Outer loop: Iterate through each element in the array
    for(int i = 0; i < n; i++) 
    {
        flag = false; // Reset flag for each new element being checked

        // Inner loop: Compare the current element with all other elements in the array
        for(int j = 0; j < n; j++) 
        {
            if(arr[i] == -arr[j])  // Check if the current element has an opposite pair
            {  
                flag = true;  // Set flag to true if an opposite number is found
                break;  // Exit inner loop early since we found a match
            }
        }
        
        // If no opposite pair was found, print the unique integer
        if (!flag) 
        {
            if (arr[i] > 0)  // If the number is positive and has no negative counterpart
            {
                cout << arr[i] << " has no matching negative appearance." << endl;
            }
            else if (arr[i] < 0)  // If the number is negative and has no positive counterpart
            {
                cout << arr[i] << " has no matching positive appearance." << endl;
            }
            else  // If the number is zero (not expected based on problem statement)
            {
                cout << arr[i] << " has no matching negative nor positive appearance." << endl;
            }
        }
    }
    
    return 0;  // Indicate successful program execution
}
