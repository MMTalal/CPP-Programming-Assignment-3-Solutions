#include <iostream>  // Include the input-output stream library for using cin (to take input) and cout (to display output)
using namespace std; // Use the standard namespace to avoid writing std:: before cin, cout, endl, etc.

int main() {  // The main function where the program execution starts
    // Display the assignment title and instructions to the user
    cout << "This is Assignment No. 7;" << endl
         << endl;
    cout << "Write a program in C++ to input any number and print it in words." << endl << endl;
    
    // Prompt the user to input the number
    cout << "Input your number to print it as a words: " << endl;
    int num;  // Declare a variable to store the number entered by the user
    cin >> num;  // Take input from the user and store it in the variable 'num'
 
    // Declare a string variable to store the final word representation of the number
    string word = "";
    
    // Handle the case where the number is 0
    if (num ==0)
    {
        word = "Zero"; // If the number is 0, directly assign "Zero" to the word variable
    }
    
    else
    {  // Loop to extract digits from the number and build the word representation
        while (num > 0)
            {  
                int digit = num % 10; // Extract the last digit of the number
                num = num / 10; // Remove the last digit from the number
                switch (digit)
                {
                    case 0 : word = "Zero "+ word; // Append "Zero" to the beginning of the word string
                    break;
                    case 1 : word = "One "+ word; // Append "One" to the beginning of the word string
                    break;
                    case 2 : word = "Two "+ word; // Append "Two" to the beginning of the word string
                    break;
                    case 3 : word = "Three "+ word; // Append "Three" to the beginning of the word string
                    break;
                    case 4 : word = "Four "+ word; // Append "Four" to the beginning of the word string
                    break;
                    case 5 : word = "Five "+ word; // Append "Five" to the beginning of the word string
                    break;
                    case 6 : word = "Six "+ word; // Append "Six" to the beginning of the word string
                    break;
                    case 7 : word = "Seven "+ word; // Append "Seven" to the beginning of the word string
                    break;
                    case 8 : word = "Eight "+ word; // Append "Eight" to the beginning of the word string
                    break;
                    case 9 : word = "Nine "+ word; // Append "Nine" to the beginning of the word string
                }
            }

            // Print the final word representation of the number
            cout << word; 
    }
    return 0;  // Return 0 to indicate that the program executed successfully
}