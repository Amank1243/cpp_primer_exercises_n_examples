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

    cout << "DONE" << endl << endl;

    // ----- Output --------------- //
    // The ASCII code for M is 77
    // Add one to the character code:
    // The ASCII code for N is 78
    // Displaying char ch using cout.put(ch): N!


    // Messin around with escape sequences
    // char ch2;
    // cout << "Enter a number for our char: ";
    // cin >> ch2;
    // cout << "\v This is the value of our char with the number you put in:\t";
    // cout.put(ch2);

    // char alarm = '\a';
    // cout << alarm << "Don't do that again!\a\n";
    // cout << "Ben \"Buggsie\" Hacker\nwas here!\n";


    // Done

    return 0;
}