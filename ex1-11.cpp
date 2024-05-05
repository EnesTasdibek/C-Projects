/* Enes Tasdibek
Exercise 1-11
This program will print a table of fahrenheit and celsius temperatures from (0 - 212) fahrenheit inside a for loop.
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()

{
	
int fah = 0;
float cel;


cout.setf(ios::fixed | ios::showpoint);



cout << "Fahrenheit to Celsius Conversion Table:\n";


cout << "Fahrenheit" << setw(12) << "Celsius" << endl;


for (fah = 0; fah <= 212; fah++) {

	cel = (fah - 32) * 5 / 9.0;

	cout.setf(ios::showpos);

	
	cout << noshowpos << setw(5) << setfill(' ') << setprecision(3) << fah  << setw(19) << showpos << setfill('.') << cel << endl;

	
	
	
	



}


	return 0;
}
