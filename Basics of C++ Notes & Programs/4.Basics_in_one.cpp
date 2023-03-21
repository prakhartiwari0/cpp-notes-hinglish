#include<iostream>
#include<iomanip>
using namespace std;

int main(){
/*
    cout<<"The size of 25.26 is "<<sizeof(25.26f)<<endl;
    // F/f -> Float
    // L/l -> Long Double
*/
  
/*
    // --------------------- Reference Variables ---------------------
    // Prakhar(Real name) -> Sarthak(Mummy) -> Bhaiya(Vani) -> Bachha (Papa)
    float x = 25.26;
    float & y = x;
    cout<<y<<endl;
    cout<<x<<endl;
*/

/*

    // --------------------- Typecasting ---------------------
    float num1 = 25.26;
    cout<<"(Method1) Now num1 will be typecasted into integer: "<<(int)num1<<endl;    
    cout<<"(Method2) Now num1 will be typecasted into integer: "<<int(num1)<<endl;    
    int num2 = int(num1);  
*/


// Constants in C++ : These values can't be changed, they are read only variables
// const int anumber = 5 (This is a constant, it can't be changed)



/*

// --------------------- Manipulators ---------------------
// They help in displaying data, in formatting
// Commonly used manipulators are "endl"

// #include <iomanip>


cout << "This is a number: " << setw(6) << 44 << endl;
cout << "This is a number: " << setw(6) << 44444 << endl;
cout << "This is a number: " << setw(6) << 444444 << endl;

*/


// --------------------- Operator Precedence & Associativity ---------------------

/*
Operator Precedence means which operator will be evaluated first. 
And if the operators are in the same group, meaning none is above or below in precendence, 
Associativity comes into play. 
Associativity means either left -> right or left <- right. 
*/

// int a = 5, b = 6;
// int c = a*5+b-3+15-2;

// Multiplication has higher precendence than addition and subtraction, 
// so it will be evaluated first, and then because add & sub have same precendance
// Associativity will be checked, and in there case it's left to right, so the
// sum will be solved from left to right.

// int c = (((((a*5)+b)-3)+15)-2);







return 0;
}


