#include <iostream>
#include <climits>


int main() {
    using namespace std;

    int INT = INT_MAX;
    short SHORT = SHRT_MAX;
    long LONG = LONG_MAX;
    long long LONG_LONG = LLONG_MAX;

    // sizeof operator yields size of type or of variable
    cout << "int is " << sizeof INT << " bytes." << endl;
    cout << "short is " << sizeof SHORT << " bytes." << endl;
    cout << "long is " << sizeof LONG << " bytes." << endl;
    cout << "long long is " << sizeof LONG_LONG << " bytes." << endl;
    cout << endl;
    cout << "Maximum values:" << endl;
    cout << "int: " << INT << endl;
    cout << "short: " << SHORT << endl;

    cout << "long: " << LONG << endl;
    cout << "long long: " << LONG_LONG << endl << endl;
    cout << "Minimum int value = " << INT_MIN << endl;
    cout << "Bits per byte = " << CHAR_BIT << endl;

    // ---------------------- OUTPUT --------------------------------- //
    
    // int is 4 bytes.
    // short is 2 bytes.
    // long is 4 bytes.
    // long long is 8 bytes.
    // Maximum values:
    // int: 2147483647
    // short: 32767
    // long: 2147483647
    // long long: 9223372036854775807
    // Minimum int value = -2147483648
    // Bits per byte = 8

return 0;
}