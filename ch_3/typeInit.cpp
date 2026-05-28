// type changes on initialization

#include <iostream>

int main()
{
    using namespace std;

    cout.setf(ios_base::fixed, ios_base::floatfield);
    
    float tree = 3;
    int guess(3.9832);
    int debt = 7.2e12;

    cout << "tree = " << tree << endl;
    cout << "guess = " << guess << endl;
    cout << "debt = " << debt << endl;

    
    // ------------------------ OUTPUT ------------------- // 
    //  tree = 3.000000
    // guess = 3
    // debt = 163481190,  notice that the debt reduced to about 1.6e09


    // Initialization with braces does not allow for narrowing, meaning when the type is unable to represent the assigned value;
    const int code = 66;
    int x = 66;
    // char c1 {31325}; // narrowing, not allowed, so the compiler throws an error
    char c2 = {66}; // allowed because char can hold 66
    char c3 {code}; // ditto, or likewise
    // char c4 = {x}; // not allowed, x is not constant, so the compiler throws an error. It is not the compilers job to keep track of the value of variables ;
    x = 31325;
    char c5 = x; // allowed by this form of initialization

    return 0;
}