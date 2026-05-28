#include <iostream>


int main() {
    using namespace std;

    float a = 2.34E+22f;
    float b = a + 1.0f;

    cout << "a = " << a << endl;
    cout << "b - a = " << b - a << endl;

    //---------------- Output ----------- //
    // a = 2.34e+022
    // b - a = 0

    // As you can see, the output for b-a should be 1, but it is 0
    
    return 0;
}