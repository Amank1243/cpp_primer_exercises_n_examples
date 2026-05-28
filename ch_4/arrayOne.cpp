#include <iostream>

int main()
{
    using namespace std;

    int yams[3]; // Create an array of ints with three elements

    yams[0] = 7; // Initialize first element of array, and so on
    yams[1] = 8;
    yams[2] = 6;

    int yamcosts[3] = {20, 30, 5};

    cout << "Total yams = ";
    cout << yams[0] + yams[1] + yams[2] << endl;
    cout << "The package with " << yams[1] << " yams costs ";
    cout << yamcosts[1] << " cents per yam.\n";
    int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
    total = total + yams[2] * yamcosts[2];
    cout << "The total yam expense is " << total << " cents.\n";
    cout << "\nSize of yams array = " << sizeof yams;
    cout << " bytes.\n";
    cout << "Size of one element = " << sizeof yams[0];
    cout << " bytes.\n";

    // --------------- OUTPUT --------------- //
    // Total yams = 21
    // The package with 8 yams costs 30 cents per yam.
    // The total yam expense is 410 cents.
    // Size of yams array = 12 bytes.
    // Size of one element = 4 bytes.

    float flt_array[6]{1,3,5};

    cout << flt_array[0] << " " << flt_array[1] << " " << flt_array[3] << " " << flt_array[5] << ", This is garbage value: " << flt_array[6];
    // --------------- OUTPUT ------------ //
    // 1 3 0 0 -1.28068e+30  // Notice that the values of the array which exist but are not initialized are set to 0;
    // The last value is also a garbage value since the index is out of range, and will be different every time

    

    return 0;
}