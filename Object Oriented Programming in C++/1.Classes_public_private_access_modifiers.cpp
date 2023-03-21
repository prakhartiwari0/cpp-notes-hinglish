#include <iostream>
using namespace std;

// Structures Vs Classes
// A structure is a collection of variables of different data types with the same name. A class in C++ is a single structure that contains a collection of related variables and functions.

// A structure is a grouping of variables of various data types referenced by the same name.In C++, a class is defined as a collection of related variables and functions contained within a single structure.
// If no access specifier is specified, all members are set to 'public' in structures, and 'private' in classes.
                                                                                                                                           
// Classes has the benefit of private access modifier, but there is nothing like that in Structures. All the data in Structures can be accessed outside.

// OOPs - Classes and objects


class Life // Making a Class
{
    private: // This can't be accessed by simply using object.property, because it's private. We need to make a function inside the class to set/get the values of the private variables.
        long int personal_mobile_number;
        int password_of_telegram;
    // Note: By default, all the members of the classes or private, so we need not to put this ` private : ` thing here.
    public:
        long int public_mobile_number;
        int discord_hash_code;
        void setData(long int psmn, int passtg); // Declaration of function, promising/telling the compiler that this function will be there in future
        // One way of defining function in class is directly here only
        void getData(){
            cout << endl << endl << "Personal Mobile Number: " << personal_mobile_number<<endl;
            cout << "Password of Telegram: " << password_of_telegram<<endl;
            cout << "Public Mobile Number: " << public_mobile_number<<endl;
            cout << "Hash Code of Discord Profile: " << discord_hash_code<<endl;

        };
};


// Another way to define a function in a class, this is to prevent cluttering inside it
void Life :: setData(long int psmn,int passtg){ // `::` is called Scope Resolution Operator
    personal_mobile_number = psmn;
    password_of_telegram = passtg;
}

        // int personal_mobile_number = 8318457321;
        // int password_of_telegram = 2003;
        // int public_mobile_number = 9170147764;
        // int discord_hash_code = 7323;

int main(){

    Life Prakhar; //Making an object Prakhar from class Life


    // Prakhar.personal_mobile_number = 8318457321; // This will give error because personal_mobile_number is private
    Prakhar.public_mobile_number = 8318457321;
    Prakhar.discord_hash_code = 7323;
    Prakhar.setData(8318457321, 2003);
    // cout << Prakhar.personal_mobile_number; /// This will give erorr cuz it's private variable.
    Prakhar.getData();

    return 0;
}



// ---------- SHORT RECAP TILL NOW ----------
// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with the class declarion like this:
/* class Employee{
            // Class definition
        } harry, rohan, lovish; */
// harry.salary = 8 makes no sense if salary is private