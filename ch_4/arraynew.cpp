// Using the new operator to create a dynamic array
#include <iostream>

int main()
{
    using namespace std;

    double * p3 = new double [3]; // space for 3 doubles
    
    p3[0] = 0.2; // You can treat the pointer like an array
    p3[1] = 0.5;
    p3[2] = 0.8;

    cout << "p3[1] is " << p3[1] << ".\n";

    p3 = p3 + 1; // increment the pointer

    cout << "p3[0] is now: " << p3[0] << " and ";
    cout << "p3[1] is " << p3[1] << "\np3[2] is " << p3[2] << ".\n";

    p3 = p3 - 1; // point back to the beginning 
    delete [] p3;   // free memory

    // ------- OUTPUT --------- //
    // p3[1] is 0.5.
    // p3[0] is now: 0.5 and p3[1] is 0.8 // After incrementing the pointer by 1, notice how the pointer changed
    // p3[2] is -6.99715e-251.

    return 0;
}