#include <iostream>
using namespace std;


/*
// Function is a code block which can be used again and again.
// The thought is to break the code into parts

int sum(int a, int b){
    int c = a+b;
    return c; // This is the return value of a function
    // It's NOT mandatory to return a values
}




int main(){
    int num1, num2;
    cout << "Enter First Number:" << endl;
    cin >> num1;
    cout << "Enter SecondNumber:" << endl;
    cin >> num2;

    cout << "The sum of both the numbers is:" << sum(num1, num2) << endl;

    return 0; // Iska matlab ki program successfully execute ho gya hai
}

*/





// If we call the function before it's declaration, there will be an error
// To tackle this problem, we need to use Function Prototypes

// ------------------ FUNCTION PROTOTYPING ------------------

// What is Function Prototyping? -> It tells the compiler early on that this
// function is coming and it will take these values and return this.

// Syntax
// type function-name(arguments)
// This gives assurity that this function exists in the program

// For Example, we can declare a function afterwards use Function Prototype
// to prevent early on if we call the function before declaration.

// int sum(int a, int b); // Accetable
// int sum(int a, b); // Not Accetable, we need to give type to all the arguments
// int sum(int, int); // Accetable, Only declaring type will also work


/*
int main()
{
    int num1, num2;
    cout << "Enter First Number:" << endl;
    cin >> num1;
    cout << "Enter SecondNumber:" << endl;
    cin >> num2;
    // num1 and num2 are called "Actual parameters"
    cout << "The sum of both the numbers is:" << sum(num1, num2) << endl;

    return 0;
}


int sum(int a, int b)
{
    // a and b are called "Formal parameters" and they will take values
    // from "Actual parameters" -> num1 and num2.

    // We can have the names of Formal and Actual Parameters the same, but 
    // it can lead to confusion so it's better to keep them different.
    int c = a + b;
    return c;
}


// THE ABOVE CODE WILL EXECUTE SUCCESSFULLY EVEN AFTER THE FUNCTION CALLED BEFORE IT'S 
// DECLARATION BECAUSE OF FUNCTION PROTOTYPE.
*/





// ---------------- Call by Value & Call by Reference ----------------


void swap(int a, int b)
{                 // temp a b
    int temp = a; // 4   4  5
    a = b;        // 4   5  5
    b = temp;     // 4   5  4
}



// Call by reference using pointers
void swapPointer(int *a, int *b)
{                  // temp a b
    int temp = *a; // 4   4  5
    *a = *b;       // 4   5  5
    *b = temp;     // 4   5  4
}


// Call by Reference Variables
void swapReferenceVar(int &a, int &b)
{                 // temp a b
    int temp = a; // 4   4  5
    a = b;        // 4   5  5
    b = temp;     // 4   5  4
}

// Return a reference
int & Returnreference(int &a, int &b)
{                 // temp a b
    int temp = a; // 4   4  5
    a = b;        // 4   5  5
    b = temp;     // 4   5  4
    return a; // This will return reference to a, and when we will call this function
    // and equate it to some other value, the value of a will be changed because it's
    // basically returning the address of a
}

int main()
{
    int x = 4, y = 5;
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    swap(x, y);
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    // The values will not be swaped because the copies of x & y are sent and the
    // actual values will not be affected.


    // Swap using Pointer Reference
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    swapPointer(&x, &y); // This will swap a and b using pointer reference
    cout << "The value of x is " << x << " and the value of y is " << y << endl;

    // Swap using Reference Variables
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    swapReferenceVar(x, y); // This will swap a and b using reference variables
    cout << "The value of x is " << x << " and the value of y is " << y << endl;

    // Something interesting
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    Returnreference(x, y) = 766; // This will change the value of x to 766 because the function is returning the reference to x.
    cout << "The value of x is " << x << " and the value of y is " << y << endl;



    return 0;
}