// using pointers and strings

#include <iostream>
#include <cstring>

int main ()
{
    using namespace std;

    char animal[20] = "bear";
    const char * bird = "wren";

    char * ps;

    cout << animal << " and " << bird << endl; // display bear and wren
    // cout << ps << endl; // Display empty pointer, which should be garbage. May crash program also

    cout << "Enter a kind of animal: ";
    cin >> animal;  // Safe if input < 20 chars
    // cin >> ps; Too horrible a blunder to try; ps doesn't
    // point to allocated space

    ps = animal; // set ps to point to string.

    cout << ps << "!\n"; // ok, same as using animal
    cout << "Before using strcpy():\n";
    cout << animal << " at " << (int *) animal << endl;
    cout << ps << " at " << (int *) ps << endl;

    ps = new char [strlen(animal) + 1]; // get new storage. I believe that the plus one is to account for the '\0', aka the terminating character
    strcpy(ps, animal); // copy string to new storage

    cout << "After using strcpy():\n";
    cout << animal << " at " << (int *) animal << endl;
    cout << ps << " at " << (int *) ps << endl;
    delete [] ps;

    // --------- OUTPUT ------------- //
    // `bear and wren
    // Enter a kind of animal: applecat 
    // applecat!
    // Before using strcpy():
    // applecat at FDC0
    // applecat at FDC0
    // After using strcpy():
    // applecat at FDC0
    // applecat at 8A80

    return 0;
}