#include <iostream>
#include <string>

int main() 
{
    using namespace std;

    // ---------- PROGRAMMING EXERSICES ------------------- //
    // 1. Write a short program that asks for your height in integer inches and then converts
    // your height to feet and inches. Have the program use the underscore character to
    // indicate where to type the response.Also use a const symbolic constant to repre-
    // sent the conversion factor.
    
    // int height;
    // const int inchesPerHeight = 12;
    // cout << "Enter your height in integer inches:___\b\b\b";
    // cin >> height;
    // cout << "Your height is: " << height / inchesPerHeight << "'" << height % inchesPerHeight; 


    // Write a program that requests the user to enter the current world population and
    // the current population of the U.S. (or of some other nation of your choice). Store
    // the information in variables of type long long. Have the program display the per-
    // cent that the U.S. (or other nation’s) population is of the world’s population.The
    // output should look something like this:
    // Enter the world's population: 6898758899
    // Enter the population of the US: 310783781
    // The population of the US is 4.50492% of the world population.
    // You can use the Internet to get more recent figures.

    // I used long long for a while until I realized it was rounding my division down to 0, which took me a bit to figure out
    // long double world_pop = 8.3e9;
    // long double user_pop;
    // string loc;

    // cout.setf(ios_base::fixed, ios_base::floatfield);
    
    // cout << "Enter the abbrev of where your from:___\b\b\b";
    // cin >> loc;
    // cout << "Enter the population of where you are from:_______________\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
    // cin >> user_pop;
    // cout << "The population of the " << loc << ", is %" <<  user_pop / world_pop * 100 << " of the World Population!";

    


    return 0;
}

// ------------- QUESTIONS --------------- //

// What safeguards does C++ provide to keep you from exceeding the limits of an integer type?
// C++ provides no automatic safeguards to keep you from exceeding integer limits; you can use the climits header file to determine what the limits are.

// What is the distinction between 33L and 33?
// Ans: 33L represents a long literal while 33 is an int literal.

// Are the two statements equivalent?  char c = 65; char c = 'A';
// They are not really equivalent even though the ASCII code for A is 65, meaning they are in some systems. Secondly, 65 is type int while A is type char

// How could you use C++ to find out which character the code 88 represents? Come up with at least two ways.
// int num = 88; cout << static_cast<char>(num);  // int num = 88; char c = num; cout << c;

// Assigning a long value to a float can result in a rounding error.What about assigning long to double? long long to double
// a double is 8 bytes wide, so assigning long to double results in no round error because you are moving from a smaller width to a bigger one, given that the long is 4 bytes wide.
// Assigning long long to double on the other hand can result in a rounding error if the long long is greater than 8 bytes, as it can go up to 128 bits, or 16 bytes

// valuate the following expressions as C++ would:
// a. 8 * 9 + 2 = 74
// b. 6 * 3 / 4 = 4.5 = 4
// c. 3 / 4 * 6 = 0
// d. 6.0 * 3 / 4 = 18.0 / 4 = 4.5
// e. 15 % 4 = 3

// What is the variable type for each of the following declarations?
// a. auto cars = 15;   int
// b. auto iou = 150.37f;   float
// c. auto level = 'B'; char
// d. auto crat = U'/U00002155';    char32_t
// e. auto fract = 8.25f/2.5;       double