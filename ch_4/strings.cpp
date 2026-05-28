#include <iostream>
#include <cstring>

int main() 
{
    using namespace std;

    const int Size = 15;

    char name1[Size];   // Empty Array
    char name2[Size] = "C++owboy";  // Initialized Array

    cout << "Howdy! I'm " << name2 << "!\n";
    cout << name2  << ": What's your name?\n";
    cin >> name1;
    cout << name2 << ": Well, " << name1 << ", your name has ";
    cout << strlen(name1) << " letters and is stored ";
    cout <<  "in an array of " << sizeof(name1) << " bytes.\n";
    cout <<name2 << ": Your initial is " << name1[0] << ".\n";
    name2[3] = '\0'; // set to null character
    cout << name2 << ": Here are the first 3 characters of my name: ";
    cout << name2 << endl;

    // ------------ OUTPUT ------------ //
    // Howdy! I'm C++owboy!
    // C++owboy: What's your name?
    // PascalPirate
    // C++owboy: Well, PascalPirate, your name has 12 letters and is stored in an array of 15 bytes.
    // C++owboy: Your initial is P.
    // C++: Here are the first 3 characters of my name: C++

    return 0;
}