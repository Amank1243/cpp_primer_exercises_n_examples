#include <iostream>

int main()
{
    using namespace std;

    int donuts = 6;
    double cups = 4.5;

    cout << "donuts value = " << donuts;
    cout << " and donuts address = " << &donuts << endl;

    // NOTE: you may need to use unsigned (&donuts)
    // and unsigned (&cups)

    cout << "cups value = " << cups;
    cout << " and cups address = " << &cups << endl;

    // --------- OUTPUT --------- //
    // donuts value = 6 and donuts address = (ADDRESS REMOVED BUT IT CAME UP)
    // cups value = 4.5 and cups address = ( ADDRESS REMOVED BUT IT CAME UP)

    // The difference in memory location is determined by the space of bytes inbetween it.
    // For example, donuts address ended in F980 and cups address ended in F988;
    // The difference is 8 bytes because the double cups was stored first, and a double is 8 bytes wide. Cool!
    return 0;
}