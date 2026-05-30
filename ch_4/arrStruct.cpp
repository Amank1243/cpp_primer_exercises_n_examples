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

    inflatable guests[2] = {
        {"MR Fantastic", 19.2, 20.99},
        {"Dr Dre", 100.10, 30.99}
    };

    cout << "The guests are " << guests[0].name << " and " << guests[1].name << endl;
    cout << "They have a combined volume of " << guests[0].volume + guests[1].volume << " cubic feet!" << endl;

    // -------- OUTPUT ------------ //
    // The guests are MR Fantastic and Dr Dre
    // They have a combined volume of 119.3 cubic feet!

    return 0;
}