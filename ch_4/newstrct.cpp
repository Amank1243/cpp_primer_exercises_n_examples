#include <iostream>

struct inflatable {
    char name[20];
    float volume;
    double price;
};

int main()
{
    using namespace std;

    inflatable * ps = new inflatable; // allot memory for structure
    cout << "Enter name of inflatable item: ";

    cin.get(ps->name,20); // method #1 for member access

    cout << "Enter a volumer in cubic feet: ";

    cin >> (*ps).volume; // method #2 for member access


    cout << "Enter a price: ";
    cin >> ps -> price; // method #3 for member access

    cout << "Name: " << (*ps).name << endl; // method 2
    cout << "Volume: " << ps->volume << " cubic feet\n"; // method 1
    cout << "Price: $" << ps->price << endl; // method 1
    delete ps; // free memory used by structure

    // ---------- OUTPUT --------- //
    // Enter name of inflatable item: rubber duck
    // Enter a volumer in cubic feet: 10.12
    // Enter a price: 18
    // Name: rubber duck
    // Volume: 10.12 cubic feet
    // Price: $18

    return 0;

}