#include <iostream>

int main() {
    using namespace std;

    // int chest = 42;  // decimal int
    // int waist = 0x42; // hexadecimal integer literal
    // int inseam = 042; // octal integer literal;

    // cout << "Monsieur cuts a striking figure! AYO.... \n";
    // cout << "chest = " << chest << " (42 in decimal)\n";
    // cout << "waist = " << waist << " (0x42 in hex)\n";
    // cout << "inseam = " << inseam << " (042 in octal)\n";

    // --------------- Output -------------- //
    // Monsieur cuts a striking figure! AYO.... 
    // chest = 42 (42 in decimal)
    // waist = 66 (0x42 in hex)
    // inseam = 34 (042 in octal) 


    // ---------------
    // NOTE: You can also use a manipulator in the iostream to output the numbers in different number bases
    // --------------

    int chest = 42;
    int waist = 42;
    int inseam = 42;

    cout << "Monsieur cuts a striking figure!" << endl;
    cout << "chest = " << chest << " (decimal for 42)" << endl;
    cout << hex; // manipulator for changing number base
    cout << "waist = " << waist << " (hexadecimal for 42)" << endl;
    cout << oct; // manipulator for changing number base
    cout << "inseam = " << inseam << " (octal for 42)" << endl;

    return 0;

}

