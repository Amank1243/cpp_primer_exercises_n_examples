// Using the new operator to allocate memory during runtime

#include <iostream>

int main()
{
    using namespace std;

    int nights = 1001;
    int * pt = new int;

    *pt = 1001;

    cout << "nights value = " << nights << ": location = "
         << &nights << endl; 

    cout << "int value = " << *pt << ": location = " << pt << endl;

    double * pd = new double; // allocate space for a double
    *pd = 10000001.0; // store a double there

    cout << "double ";
    cout << "value = " << *pd << ": location = " << pd << endl;
    cout << "location of pointer pd: " << &pd << endl;
    cout << "size of pt = " << sizeof(pt);
    cout << ": size of *pt = " << sizeof(*pt) << endl;
    cout << "size of pd = " << sizeof pd;
    cout << ": size of *pd = " << sizeof(*pd) << endl;

    // --------- OUTPUT --------- //
    // nights value = 1001: location = 0028F7F8
    // int value = 1001: location = 00033A98
    // double value = 1e+007: location = 000339B8
    // location of pointer pd: 0028F7FC
    // size of pt = 4: size of *pt = 4
    // size of pd = 4: size of *pd = 8

    return 0;
}