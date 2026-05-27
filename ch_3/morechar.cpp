#include <iostream>

using namespace std;

int main() {
    char ch = 'M';
    int i = ch;

    cout << "The ASCII code for " << ch << " is " << i << endl;
    cout << "Add one to the character code:" << endl;
    ch = ch + 1; // change character code in ch
    i = ch; // save new character code in i
    cout << "The ASCII code for " << ch << " is " << i << endl;

    // using the cout.put() member function to display a char
    cout << "Display a char ch using cout.put(ch):  ";
    cout.put(ch) << endl;

    cout << "Now lets use cout.put() tp display '!':  ";
    cout.put('!') << endl;

    cout << "DONE";

    return 0;
}