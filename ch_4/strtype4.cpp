// This program features the differences in line input between cstrings and C++ class strings
#include <iostream>
#include <cstring>
#include <string>

int main()
{   
    using namespace std;

    char charr[20];
    string str;

    cout << "The length of string in charr before input is: " 
         << strlen(charr) << endl;

    cout << "The length of string in str before input is: "
         << str.size() << endl;

    cout << "Enter a line of text:\n";
    cin.getline(charr, 20); // indicate maximum length
    cout << "You entered: " << charr << endl;
    cout << "Enter another line of text:\n";
    getline(cin, str); // cin now an argument; no length specifier
    cout << "You entered: " << str << endl;
    cout << "Length of string in charr after input: "
    << strlen(charr) << endl;
    cout << "Length of string in str after input: "
    << str.size() << endl;

    // -------------------- OUTPUT ------------- //
     //     The length of string in charr before input is: 6
     //      The length of string in str before input is: 0
     //      Enter a line of text:
     //      fjfjfjfjfjfjfjfjfjf
     //      You entered: fjfjfjfjfjfjfjfjfjf
     //      Enter another line of text:
     //      The last line is exactly 19 characters which is why it worked, and I think this string can be as long as I want!
     //      You entered: The last line is exactly 19 characters which is why it worked, and I think this string can be as long as I want!
     //      Length of string in charr after input: 19
     //      Length of string in str after input: 112

     // This program breaks if you overflow the number of characters in the charr array

    return 0;
}