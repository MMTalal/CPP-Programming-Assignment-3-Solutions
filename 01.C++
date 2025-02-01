#include <iostream>  // Include the input-output stream library for using cin and cout
using namespace std; // Use the standard namespace to avoid writing std:: before cin and cout

int main() {  // The main function where the program execution starts
     // Display the assignment title and instructions
    cout << "This is Assignment No. 1;" << endl
         << endl;
    cout << "Enter Number and Count the number of steps required to make the Number equal to Zero." << endl
         << "-> if Number is Odd decrease one from it" << endl
         << "-> If Number is Even divide it by 2" << endl
         << endl;

    cout << "input your number please: " << endl;
    int num;  // Declare a variable 'num' to store the input number from the user
    cin >> num;  // Take the input number from the user and store it in 'num'

    int count = 0;  // Declare a variable 'count' to keep track of the number of steps taken to reduce 'num' to zero

    // Start a while loop that will continue as long as 'num' is greater than 0
    while (num > 0) 
    {
        // Check if 'num' is even (i.e., divisible by 2 with no remainder)
        if (num % 2 == 0) 
        {
            num = num / 2;  // If 'num' is even, divide it by 2 and update 'num' with the result
        } 
        
        // If 'num' is not even (i.e., it's odd), execute this block
        else 
        {
            num = num - 1;  // If 'num' is odd, subtract 1 from it and update 'num' with the result
        }
        
        count++;  // Increment the 'count' variable by 1 to keep track of the number of steps taken
    }

    // After the loop ends (when 'num' becomes 0), print the total number of steps stored in 'count'
    cout << count << endl;

    return 0;  // Return 0 to indicate that the program executed successfully
}