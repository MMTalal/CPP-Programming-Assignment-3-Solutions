#include <iostream> // Include the iostream library for input and output operations.
using namespace std; // Use the standard namespace to avoid prefixing std:: with every standard function.

// Main function where program execution begins.
int main() {
    // Display the assignment title and description.
    cout << "This is Assignment No. 12;" << endl << endl;
    cout << "Write a program to input elements in an array and copy all elements of the first array into the second array." << endl;

    int arr1[10]; // Declare the first array to store user inputs.

    // Prompt user to input 10 elements into the array.
    cout << "Input elements in array: ";
    
    // Loop to read 10 elements from the user and store them in arr1.
    for(int i = 0; i < 10; i++) 
    {
        cin >> arr1[i]; // Read and store each element in the first array.
    }
    
    // Display the elements of the first array.
    cout << "Array1: ";
    for (int i = 0; i < 10; i++)
    {
        cout << arr1[i] << " "; // Print each element of arr1.
    }
    cout << endl; // Move to the next line after printing all elements.

    int arr2[10]; // Declare the second array to store the copied elements from the first array.

    // Loop to copy elements from arr1 to arr2.
    for (int i = 0; i < 10; i++)
    {
        arr2[i] = arr1[i]; // Assign each element of arr1 to arr2.
    }

    // Display the elements of the second array.
    cout << "Array2: ";
    for (int i = 0; i < 10; i++)
    {
        cout << arr2[i] << " "; // Print each element of arr2.
    }
    cout << endl; // Move to the next line after printing all elements.

    // best solution
    /*
    int a[100], b[100];

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }


    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    */

    return 0; // Indicate successful program termination.
}
