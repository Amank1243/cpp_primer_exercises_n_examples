#include <iostream>

int main() {
    
    wchar_t bob = L'P'; // A wide-character constant. It is a constant as indicated by the L infront of it
    
    std::wcout << L"tall" << std::endl;
    std::cout << bob << std::endl; // Output of this is 80

    std::wcout << bob << std::endl; // Output of this is P

    // Here are some other char types:
    char16_t ch1 = u'q'; // basic character in 16-bit form
    char32_t ch2 = U'\U0000222B'; // universal character name in 32-bit form
    // not sure how to output them but prob doesn't matter
    // used to represent universal character names

    
    return 0;
}