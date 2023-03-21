#include <iostream>
using namespace std;

struct Employee // You can use different data types inside it
{
    int employee_id;
    char favChar;
    int salary;
};


union money // You can use only one of the values
{
    int rice;
    char car;
    float pounds;
};

int main(){
    struct Employee harry;
    harry.employee_id = 1234;
    harry.favChar = 'c';
    harry.salary = 2000.50;
    cout << harry.salary << endl;

    union money m1;
    m1.rice = 5; // This will throw garbage because only one value can be set and we have set "car" in the next line
    m1.car = 'a'; // Union me ek time par ek value use kar skte hain
    cout << m1.rice << endl;
    cout << m1.car << endl;

    // ------------- enum -------------
    // So this is very easy but might seem weird at first,
    // enum or enumeration is a data type consisting of named values like elements, members, etc., that represent integral constants. It provides a way to define and group integral constants. It also makes the code easy to maintain and less complex.

    enum dikhne_me_alag_magar_Asal_mein_hain_integer{pehla, dusra, teesra};
    // Actually, pehla = 0, dusra = 1, teesra = 2

    cout << pehla << endl; // 0
    cout << (teesra==3) << endl; // 0 (Means false)
    cout << (teesra==2) << endl; // 1 (Means true)

    return 0;
}