#include <iostream>
using namespace std;

//Pointer basics

int main() {

    int a = 5;
    int* p{ &a };






    cout << "Address stored in p: " << *p<< endl;
    *p = 8;

    cout << "Value of a using p: " << *p << endl;



    cout << "New value of a: " << a << endl;

//Pointer Arithmetic
    int arr[5] = {10, 20, 30, 40, 50};
    int* ptr = arr;

    cout << "Addresses of each element in the array:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Element " << i << ": " << (ptr + i) << endl;
    }


    cout << "\nValues in the array:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Value at address " << (ptr + i) << ": " << *(ptr + i) << endl;
        ++*ptr;
    }



    return 0;
}





