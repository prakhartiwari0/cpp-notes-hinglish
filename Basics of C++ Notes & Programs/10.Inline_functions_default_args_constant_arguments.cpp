#include <iostream>
using namespace std;

/*
// -------------------- Inline Functions --------------------

// Technical Definion: A function specifier that indicates to the compiler that inline substitution
// of the function body is to be preferred to the usual function call implementation


// Normal Function (when called): Actual Parameters ko copy karo formal parameters me, 
// fir processing start karo, fir code run hone ke baad return karo, fir jaha call hua tha
// waha par control wapas karo.

// When to use inline function? -> Jab Function ke andar naa-ke-barabar kaam ho rha ho.

// When NOT tu use inline function? -> Jab Function thoda bada ho. Jab Recursion hota hai. Jab Static Variables
// use ho rhe ho. Jab loops use ho rhe ho inside function.

// Bhai Static variables kya hote hain? -> Are are daro mat, Static Variables bus ek baar initiliaze honge, 
// aur fir wo apni value retain karke rakhenge, to agar function ke andar tumne unhe initiliaze kiya, to
// to function khatm hone ke baad bhi unki value bani rahegi, aur agar firse wo function call hota hai to
// wo apni purani value ko rakhe rahenge and iniliazation skip kardenge.
// For example ->
// inline int product(int x, int y)
// {
//     static int c = 0; // This executes only once, and the value will be saved
//     c = c+1; // Ab jab jab ye function call hoga iski value badhti jayegi kyunki iski purani value will be retained.
//     // to pehle hogi 1, then next call me c ho jayega 2, then 3, then 4....continued  
//     return x*y;
// }


inline int product(int x, int y)
{
    return x*y;
}

int main(){
    int a, b;
    cout<<"Enter the value of a, b"<<endl;
    cin>>a>>b;
    cout<< "The product of a and b is: "<<product(a, b)<<endl;

    return 0;
}


// Fun Note: The compiler can decide to allow using inline function or not, it will check.
*/



/*
// -------------------- Default Arguments --------------------

float moneyReceived(int currentMoney, int factor = 1.04) // We can choose not give the factor argument and it will take it's value 
// by default, which here is 1.04
// Note: You should write default arguments in the end and not in the beginning, after all the compulsory arguments.
{
    return currentMoney*factor;
}

int main(){

    int money = 100000;
    cout << "If you have " << money << " Rs in your bank account, you will recive " << moneyReceived(money) << "Rs after 1 year" << endl; // Didn't gave the factor argument
    cout << "For VIP: If you have " << money << " Rs in your bank account, you will recive " << moneyReceived(money, 1.1) << " Rs after 1 year"; // Gave the factor argument too

    return 0;
}
*/





/*
// CONSTANT ARGUMENTS
// These arguments will not be changed, they are used in case you don't want the function to change the value of the argument mistakenly.
int string_lenght(const char *p){

}
*/




