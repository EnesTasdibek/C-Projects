/* Bill Wohlleber
Exercise 1-9
This program will print an ASCII table in different bases
*/
#include<iostream>
#include<iomanip>
using namespace std;

int main3()
{
    int x;
    cout.setf(ios::showbase);        // turn on base prefix for all
    cout << "ASCII Values\n";        // title
    // column headings with five spaces between
    cout << "Character" << setw(12) << "Decimal" << setw(10) << "Octal"
        << setw(16) << "Hexadecimal" << endl;
    for (x = 48; x <= 122; x++)
        // for each valule center under heading and convert to proper base
        cout << setw(5) << (char)x << setw(14) << dec << x
        << setw(12) << oct << x << setw(13) << hex << x << endl;

    return 0;
}