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

return 0;
}