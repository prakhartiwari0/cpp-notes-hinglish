#include <iostream>
using namespace std;

int main(){

// Array -> An Array is a collection of items of similar type stored in contiguous memory locations.


int arr[] = {1, 2, 3, 4, 5};

// cout<<arr[0]<<endl;
// arr[0] = 9;
// cout<<arr[0]<<endl;



// PRINTING VALUES USING LOOPS 
// int a = 0;

// while(a<5){
// cout<<arr[a]<<endl;
// a++;

// }

// do
// {
// cout << arr[a] << endl;
// a++;

// } while (a < 5);


 
// ------------------ POINTER AND ARRAYS ------------------



// int *arrad = &arr; // &array_name is wrong

// int *arrad = arr;
// cout << arrad << endl; // Array name itself will give the address of the array

// cout << &arr << endl;
// cout << arr << endl;




int* p = arr; // This is pointing to the address of the first value of the array 

// We can increment the Pointer and get the other values
cout << "The value of *(p) is " << *(p) << endl;
cout << "The value of *(p + 1) is " << *(p + 1) << endl;
cout << "The value of *(p + 2) is " <<  *(p + 2) << endl;
cout << "The value of *(p + 3) is " <<  *(p + 3) << endl;
cout << "The value of *(p + 4) is " <<  *(p + 4) << endl;


// POINTER ARITHMETIC


// int* p = arr (Address of array); // Because array will give the Address of itself

// address(current) = i // The variable which will be added to the pointer
// address(new) = p+i // p is the Address and i is the variable

// address(new) = address(current) + i * sizeof(data type) // This is how the above sums are working




return 0;
}