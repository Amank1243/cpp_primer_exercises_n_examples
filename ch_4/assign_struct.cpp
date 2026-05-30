#include <iostream>

struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    using namespace std;

    inflatable bouquet =
    {
        "sunflowers",
        0.20,
        12.49
    };

    inflatable choice;

    cout << "The size of the choice struct before initalizing it to any value is " << sizeof choice << " Bytes!" << endl;

    cout << "bouquet: " << bouquet.name << " for $";
    cout << bouquet.price << endl;

    choice = bouquet; // assign one structure to another

    cout << "choice: " << choice.name << " for $";
    cout << choice.price << endl;

    cout << "The size of the choice struct is " << sizeof choice << " Bytes!";

    // --------- OUTPUT ---------- //
    // The size of the choice struct before initalizing it to any value is 32 Bytes!
    // bouquet: sunflowers for $12.49
    // choice: sunflowers for $12.49
    // The size of the choice struct is 32 Bytes!

    return 0;
}