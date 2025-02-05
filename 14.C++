#include <iostream> // Include the iostream library for input and output operations.
using namespace std; // Use the standard namespace to avoid prefixing std:: with every standard function.

// Main function where program execution begins.
int main() {
    // Display the assignment title and description.
    cout << "This is Assignment No. 14;" << endl << endl;
    cout << "Given an array of integers, return the additive inverse of each. Each positive becomes negative, and the negative becomes positive" << endl;

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
            
            // Check if the current element is positive.
            if (arr[i] > 0)
            {
                // Convert positive number to negative by subtracting twice its value.
                arr[i] = (arr[i] - (arr[i]*2));
                // Another way to convert positive into negative: ((( Same idea, but division takes longer to process.))) 
                // arr[i] = (arr[i] / -1);

                // The best and most efficient way is to use multiplication by -1 to find the additive inverse of any number (whether positive or negative):
                // arr[i] = (arr[i] * -1);

                // best solution:-
                // arr[i] = -arr[i]; // Convert the number to its additive inverse
            }
            // Check if the current element is negative.
            else if ( arr[i] < 0)
            {
                arr[i] = (arr[i] * -1);
            }
            
            // If the element is zero, leave it as zero.
            else
            arr[i] = 0;
        }
        
        // Display the transformed array.
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }

    // best solution: after make loop to cin for array make another loop to multiply -1 for the array then you can make another loop for cout to display the result // don't use if condition

    /*
    arr[i] = arr[i] * -1
    */

    return 0; // Indicate successful program termination.
}
