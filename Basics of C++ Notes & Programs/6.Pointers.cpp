#include <iostream>
using namespace std;

int main(){
    // What is a Pointer? -> It's a data type that store address of other data types
    int a = 3;
    int* b = &a;

    // & ---> (Address of) operator also known as referencing operator
    cout << &a << endl; // {Address}
    cout << b << endl; // {Address}

    // When you put start (*) before it, it gives you the value
    cout << *b << endl; // 3
    // * ---> (Value at) Dereference operator

// POINTER to POINTER (Address ka bhi address store karta hai)

    int** c = &b; // Pointer to Pointer, means a Pointer which contains the address of another Pointer 
    cout << c << endl; // 3
    return 0;
}