#include <iostream>
#include <typeinfo>

int main() {
    using namespace std;

    char ch;

    cout << "Enter a character: ";
    cin >> ch;
    cout << "Hola! ";
    cout << "Thank you for your time " << ch << " character." << endl;

    // cout << "if this apple is a string: " << typeid("apple").name() << endl;
    // cout << "Then what is this: " << typeid('apple').name();
    // Never mind, 'apple' just throws an error for having:  "too many characters in constant"
    return 0;
}