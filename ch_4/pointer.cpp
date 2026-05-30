// Our first pointer variable

#include <iostream>

int main()
{
    using namespace std;

    int updates = 6;
    int *p_updates;  // declare a pointer to an int
    
    p_updates = &updates; // assing the address of updates to our pointer variable

    // express values two ways
    cout << "Values: updates = " << updates;
    cout << ", *p_updates = " << *p_updates << endl;
    
    // express address two ways
    cout << "Addresses: &updates = " << &updates;
    cout << ", p_updates = " << p_updates << endl;
    
    // use pointer to change value
    *p_updates = *p_updates + 1; // You can use the memory address of updates to update the value. Just remember to deref it before!
    cout << "Now updates = " << updates << endl;
    
    // -------- OUTPUT ------- //
    // Values: updates = 6, *p_updates = 6
    // Addresses: &updates = -----AE0, p_updates = -----AE0
    // Now updates = 7

    return 0;
}