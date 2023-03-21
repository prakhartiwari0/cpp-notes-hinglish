#include <iostream>
using namespace std;

int main()
{
    //--------------- Control Structures ----------------
/*

Basic Controls Structures
1. Sequence => Ek ke baad ek action le
2. Selection => Entry le, condition check kar, fir conditions ke anusaar choice lekr aage badh
3. Loop => Enter, check condition, take action accordingly, run again till the condition is satisfied/dissatisfied



int age;
cout << "Apni age bata re "<<endl;
cin >> age;

if (age<18){
cout << "Oh tu to abhi chotku hai re..."<<endl;
}

else if (18<age){
cout << "Oh tu to bada hogya re!"<<endl;
}

else {
cout << "Are baba age daalna seedhe se kyu masti karela hai tu?"<<endl;
}


int age;
cout << "Apni age bata re "<<endl;
cin >> age;


switch (age){
    case 18:
        cout << "Oh tu to 18 hai."<<endl;
        break; // To stop or break from the switch here

    case 20:
        cout << "Oh tu to 20 hai."<<endl;
        break;


    default:
        cout << "Are baba age daalna seedhe se kyu masti karela hai tu?"<<endl;
}
*/





    //--------------- Loops ----------------
// There are three types of loops in C++ :-
// 1. For Loop
// 2. While Loop
// 3. Do While Loop


// ------- FOR LOOP -------
// Initialization -> Condition -> Loop Body -> Updated -> Condition -> Loop Body -> ...

// SYNTAX
// for(initialization, condition, updation){
//     Loop Body
// }

// For Loop will run as long as the condition is true, or in other words, it will run 
// until the condition is false 



// ------- WHILE LOOP -------
// Initialization -> Condition -> Loop Body -> Updated -> Condition -> Loop Body -> ...

// SYNTAX
// while(condition){
//     Statements
// }

// While Loop will run while the condition is true


// ------- DO WHILE LOOP -------
// Initialization -> Condition -> Loop Body -> Updated -> Condition -> Loop Body -> ...

// SYNTAX
// do{
//   Statements
// }while(condition);

// Do While Loop will run while the condition is true, but it will run AT LEAST ONCE.
// So the Condition can be false from the starting, but the statements under DO will Run
// Once in the starting and then the loop will stop 



//--------------- Break & Continue ----------------


// BREAK 
// for (int i = 0; i < 10; i++)
// {
//     if (i==7)
//     {
//         break; // This means the loop will be stopped, it will be break out of the whole loop
//     }
    
//     cout << i << endl;
// }


// CONTINUE 
// for (int i = 0; i < 10; i++)
// {
//     if (i==7)
//     {
//         continue; // This will only skip the current iteration, the rest of the loop will continue to the next iteration
//     }
    
//     cout << i << endl;
// }




    return 0;
}