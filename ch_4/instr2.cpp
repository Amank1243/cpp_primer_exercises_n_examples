#include <iostream>
#include <cstring>

int main()
{
    using namespace std;

    const int ArSize = 20;

    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name: ";
    cin.getline(name, ArSize);

    cout << "Enter your favorite dessert: ";
    cin.getline(dessert, ArSize);

    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";


    // Program now works after using cin.getline !!
    // ------- OUTPUT ---------- //
    // Enter your name: Lebron James
    // Enter your favorite dessert: APPLE pie or something
    // I have some delicious APPLE pie or someth for you, Lebron James.
    
    return 0;
}