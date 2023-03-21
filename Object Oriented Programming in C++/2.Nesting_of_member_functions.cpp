// ------------ Nesting of member functions ------------
#include <iostream>
#include <string> // Including string library for using it's functions and more
using namespace std;

class binary
{
private:
    string s; // using string library, declaring a string "s"
    void chk_bin(void); // we can't use this function directly by `binary.chk_bin()`. We can use it through other methods of this class.

public:
    void read(void);
    void ones_compliment(void);
    void display(void);
};

void binary::read(void) // This function will ask for user input for a Binary Number
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void binary::chk_bin(void) // This function will check if the input is binary or not, a displays a text if it's not
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary::ones_compliment(void) // This function will convert all the 0s into 1s and all the 1s into 0s 
{
    chk_bin(); // This is an example NESTING MEMBER FUNCTIONS, we can use a function inside another function of the class
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary::display(void) // This will simply display the Binary Number stored in "s" variable (it may differ from the original if chk_bin() is used)
{
    cout << "Displaying your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binary b;
    b.read();
    // b.chk_bin(); // This is a private function so can't be accessed like this
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}


// Summary: We can make a Public or Private Method, and we can use all the methods inside other methods of the class.