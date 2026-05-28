#include <iostream>

int main() 
{
    using namespace std;

    int auks, bats, coots;

    // the following statement adds the values as double,
    // then converts the result to int
    auks = 19.99 + 11.99;

    // these statements add values as int
    bats = (int) 19.99 + (int) 11.99; // old C syntax       // Notice how the value rounds down when converting from floating point number to int
    coots = int (19.99) + int (11.99); // new C++ syntax    // Notice how the value rounds down when converting from floating point number to int
    cout << "auks = " << auks << ", bats = " << bats;
    cout << ", coots = " << coots << endl;

    char ch = 'Z';
    cout << "The code for " << ch << " is "; // print as char
    cout << int(ch) << endl; // print as int
    cout << "Yes, the code is ";
    cout << static_cast<int>(ch) << endl; // using static_cast

    // -------------- OUTPUT ------------------ //
    // auks = 31, bats = 30, coots = 30   
    // The code for Z is 90
    // Yes, the code is 90
}