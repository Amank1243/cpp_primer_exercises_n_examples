#include <iostream>

using namespace std;

int main() {
    
    cout << "\aOperation \"HyperHype\" is now activated!\n";
    cout << "Enter your agent code:  ________\b\b\b\b\b\b\b\b";

    long long code;
    cin >> code;

    cout << "\aYou entered " << code << "...\n";
    cout << "\aCode verified! Proceed with Plan Z3!\n";

    // Program uses backspace escape sequence (\b) to remove the underscores when typing your code....
    // Pretty cool!
    
    return 0;

}