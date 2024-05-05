/* Enes Tasdibek
Exercise 3-10b

*/
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include<iostream>
#include<cstring>
#include<string>
#include<cctype>
using namespace std;


int main()
{

	string str[3];

	int i;
	for (i = 0; i < 3; i++)
	{
		cout << "Enter text:  ";
		cin >> str[i];

	}



	string beginning[3];
	string  ending[3];

	int j;

	for (j = 0; j < 3; j++) {

		ending[j] = str[j].substr(str[j].length() - 2);
		beginning[j] = str[j].substr(0, 3);



		if (ending[j] == "es")

			cout << "Ending with 'es': " << str[j] << endl;



		else if (beginning[j] == "yan")

			cout << "Beginning with 'yan': " << str[j] << endl;



	}


}





