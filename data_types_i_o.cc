/** Name: Sheil Iyer
Purpose: Utilizing various tools in C++ including commenting, declaring variables,
getting user input from keyboard, and generating output to terminal screen. It is also practice for pushing/committing to Github
*/


#include <iostream>
//iostream is the service used to input and output information
#include <string>
//in the following code, string will be used, so the libary must be imported

using namespace std;

int main ()
{
    int a;
    int b;
    int c;
    cout << "enter a value for a, b, or c: \n";
    cin >> a;
    cout << "\nYour value is: "  << a << "\n" ;

    //for this group of data types, I am asking the user to input a type of integer, and then confirming
    //the input by outputting the same variable into the terminal
    
    double d;
    cout << "enter a decimal value for d: \n";
    cin >> d;
    cout << "\nYour value is: "  << d << "\n" ;

    //for this group, I am asking the user to input a double, and then confirming the input by outputting the same variable

    char e;
    cout << "enter a value for the char: \n";
    cin >> e;
    cout << "\nYour value is: " << e << "\n";
    //for this group, I am asking the user to input a character, and then confirming the input by outputting the same variable

    bool f;
    cout <<"Enter a value for the boolean (whole numbers 1 or 0): \n";
    cin >> f;
    cout << "\nYour value is: " << f << "\n";
    //for this group, I am asking the user to input a boolean, and then confirming the input by outputting the variable, which can only be 0 or 1

    string g;
    cout << "Enter a value for the string g: \n";
    cin >> g;
    cout << "\nYour value is: " << g << "\n";
     //for this group, I am asking the user to input a string, and then confirming the input by outputting the variable, which is a string



    


    
    
    return 0;
}
