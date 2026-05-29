#include <iostream>

int main()
{
    using namespace std;

    cout << "What year was this house built?\n";
    
    int year;
    cin >> year;
    cin.get(); //Program was broken without this with the input specified below;
              // Add this line to the brooken program, and it works!
    
    cout << "What is it's street address?\n";

    char address[80];
    cin.getline(address, 80);

    cout << "Year built: " << year << endl;
    cout << "Address: " << address << endl;
    cout << "Done!\n";

    // ----- OUTPUT ---------- //
    // What year was your house built?
    // 1966
    // What is its street address?
    // Year built: 1966
    // Address
    // Done!    // You never get a chance to enter the address!

    return 0;
}