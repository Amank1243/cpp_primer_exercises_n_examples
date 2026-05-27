#include <iostream>

int main() {
    using namespace std;

    int chest = 42;  // decimal int
    int waist = 0x42; // hexadecimal integer literal
    int inseam = 042; // octal integer literal;

    cout << "Monsieur cuts a striking figure! AYO.... \n";
    cout << "chest = " << chest << " (42 in decimal)\n";
    cout << "waist = " << waist << " (0x42 in hex)\n";
    cout << "inseam = " << inseam << " (042 in octal)\n";

    // --------------- Output -------------- //
    // Monsieur cuts a striking figure! AYO.... 
    // chest = 42 (42 in decimal)
    // waist = 66 (0x42 in hex)
    // inseam = 34 (042 in octal) 

    return 0;

}

