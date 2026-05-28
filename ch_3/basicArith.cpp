#include <iostream>
using namespace std;

int main() {
    float heads, hats;

    cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point. Meaning, this sets the output 
    // for floating-point numbers to fixed-point notation, meaning 
    // that numbers will be displayed in a standard decimal format rather than in scientific notation.

    cout << "Enter a number: ";
    cin >> hats;
    cout << "Enter another number: ";
    cin >> heads;

    cout << "hats = " << hats << "; heads = " << heads << endl;
    cout << "hats + heads = " << hats + heads << endl;
    cout << "hats - heads = " << hats - heads << endl;
    cout << "hats * heads = " << hats * heads << endl;
    cout << "hats / heads = " << hats / heads << endl;
    }
