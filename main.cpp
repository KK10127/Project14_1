/*
 * CHAPTER 14, PROJECT 1
 * CS 151
 * Tu 5:30-9:20 with Porto
 * Programmer: Jay Montoya
 *
 *
 * PROBLEM STATEMENT:
 *      Write an iterative version (using a loop instead of recursion) of the factorial function shown in this chapter.
 *      Demonstrate the use of the function in a program that prints the factorial of a number entered by the user.
 *
 * ALGORITHM for main():
 *      PROMPT the user to enter an integer to compute the factorial of.
 *      STORE result in integer variable 'input'.
 *      CALL function factorial(input).
 *      OUTPUT result to the user.
 *
 * ALGORITHM for factorial(int n):
 *      CREATE an integer variable 'solution' to return.
 *      REPEAT n times
 *          Multiply and set the solution variable by n, n-1, n-2, n-3 all the way down to n = 1.
 *      RETURN 'solution'.
 *
 */
#include <iostream>
using namespace std;

// function prototype
int factorial(int n);

// main method
int main() {

    // define a variable to hold the user input
    int input;

    // greeting and prompt user
    cout << "\nWelcome to the demo of project 1!" << endl;
    cout << "Enter a number to compute the factorial of: ";
    cin >> input;

    // output
    cout << "\n\nComputing factorial...\n\n";

    // computation + output
    cout << "\tThe factorial of " << input << " is " << factorial(input) << endl;

    // done
    return 0;
}

/*
 * This function computes the factorial of an integer iteratively.
 * PRECONDITION: n is a non-negative integer.
 * POSTCONDITION: the value of n! is returned to the callers frame.
 */
int factorial(int n) {
    int solution = 1;
    for (int i = n; i > 0; i--) {
        solution *= i;
    }
    return solution;
}
