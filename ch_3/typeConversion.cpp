#include <iostream>

int main()
{
    using namespace std;

    char ch = 'Q';
    int num = 3;
    float fnum = 2;
    cout.setf(ios_base::fixed, ios_base::floatfield);

    cout << "Int conversion of a char: " << int(ch) << "\t And here is the original value: " << ch << endl;
    cout << "float conversion of a int: " << double(num) << endl;
    cout << "Int conversion of a float: " << int(fnum) << endl; 
    
    // -------- Output -------------- //
    // Int conversion of a char: 81     And here is the original value: Q    (Notice how the original val stays the same)
    // float conversion of a int: 3.000000
    // Int conversion of a float: 2


}