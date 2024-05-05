#include<iostream>
#include<iomanip>
using namespace std;

int main2()
{
	int fah;
	float cel;
	cout.setf(ios::fixed | ios::showpoint);
	cout << "Enter fahrenheit temperature: ";
	cin >> fah;
	cel = (fah - 32) * 5 / 9.0;
	cout << "Temperature in celsius is " << setprecision(3)
		<< cel << endl;
	return 0;
}