// Initalizing a pointer

#include <iostream>

int main()
{
    using namespace std;

    int higgens = 5;
    int *ptr_higgens = &higgens;

    cout << "Value of higgens = " << higgens
    << "; Address of higgens = " << &higgens << endl;
    cout << "Value of *ptr_higgens = " << *ptr_higgens
    << "; Value of ptr_higgens = " << ptr_higgens << endl;

    // -------- OUTPUT ------------- //
    // Value of higgens = 5; Address of higgens = ------FA40
    // Value of *ptr_higgens = 5; Value of ptr_higgens = ------FA40    

    return 0;
}