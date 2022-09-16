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
    
    double d;
    cout << "enter a decimal value for d: \n";
    cin >> d;
    cout << "\nYour value is: "  << d << "\n" ;

    char e;
    cout << "enter a value for the char: \n";
    cin >> e;
    cout << "\nYour value is: " << e << "\n";

    //for this group of data types, I am asking the user to input a type of integer, and then confirming
    //the input by outputting the same variable into the terminal


    
    
    return 0;
}
