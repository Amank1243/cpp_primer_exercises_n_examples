// Using the delete operator

#include <iostream>
#include <cstring>

using namespace std;

char *getName(void);  // function prototype
int main()
{
    char * name;

    name = getName();
    cout << name << " at " << (int *) name << '\n'; // type cast char pointer to int pointer in order to show the memory address
    delete [] name; // memory freed

    name = getName();
    cout << name << " at " << (int *) name << '\n'; // type cast char pointer to int pointer in order to show the memory address
    delete [] name;

    // ---- OUTPUT ------- //
    // Enter last name: Fredeldumpkin
    // Fredeldumpkin at 0x004326b8
    // Enter last name: Pook
    // Pook at 0x004301c8

    return 0;
}

char * getName()    // function to return pointer to a new string
{
    char temp[80];  // temporary storage

    cout << "Enter a last name: ";
    cin >> temp;

    char * pn = new char [strlen(temp) + 1]; // copy string into a smaller space
    strcpy(pn, temp);

    return pn;  //temp lost when function ends
}