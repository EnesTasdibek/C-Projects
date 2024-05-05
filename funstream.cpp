#include<iostream>
#include <math.h> 
#include <iomanip>
#include <cctype>
using namespace std;

#define PI 3.14159265

int main()
{
	cout << "Input a (1) for finding Cosines, (2) for finding Logarithms" <<
		"(3) for converting between Decimal and Hexadecimal, or (4) to Exit the program." << endl;


	float num;
	int val;
	char x;
	char x2;
	char x3;
	float floatinradians;
	float floatresult;
	bool cs;
	int n;

	cin >> val;




	// question 1
	while (val == 1)
	{
		cout << "Do you want to find the cosine(c), arc cosine(a), or hyperbolic cosine?(h)" << endl;

	
		 cin >> x;

		//x = cin.get();





		if (x == 'c')

		{
			cin >> floatinradians;

			float resultcos = cos(floatinradians);


			cout << setprecision(3) << " result is" << resultcos << endl;
			

		}
		else if (x == 'a')

		{

			cin >> floatinradians;
			float resultarccos = acos(floatinradians);

			cout << setprecision(3) << " result is" << resultarccos << endl;

			
		}
		else if (x == 'h')

		{

			cin >> floatinradians;
			float resultcosh = cosh(floatinradians);


			cout << setprecision(3) << "result is" << resultcosh << endl;

			return 0;
		}

	}

	//// question 2
	while (val == 2)

	{
		cout << "Do you want to find the common logarithm(c) or the natural logarithm(n)?" << endl;

		cin >> x2;
		//x2 = cin.get();



		if (x2 == 'c')
		{
			cin >> num;



			floatresult = log10(num);

			cout << showpos << setprecision(3) << "result is" << floatresult << endl;
			
		}

		else if (x2 == 'n')
		{
			cin >> num;

			floatresult = log(num);

			cout << showpos << setprecision(3) << "result is" << floatresult << endl;
			return 0;

		}

	}

	//// question 3
	while (val == 3)
	{
		cout << "Do you want to convert decimal to hexadecimal(d) or hexadecimal to decimal(h)?" << endl;
		
		
		cin >> x3;

		//x3 = cin.get();



		if (x3 == 'd')  // decimal to hexadecimal
		{
					

			cout << "Enter the decimal you want: ";
			cin >> n;
			
			
			
			cout << "\nDo you want to use lowercase(1) or uppercase(0) letters in the printing of the hexadecimal number?\n" << endl;

			cin >> cs;

			//boolean alphabetical values
			bool b = true;
			bool a = false;


			if (cs == b)
			{
				//lower
				cout << " Inputted number: " << setw(3) << n << showbase<< hex << " Converted value: " << setw(3) << n << endl;


				
			}

			else if (cs == a)
			{
				//to upper case
				cout << " Inputted number: " <<dec << setw(3)  << n << uppercase << showbase << hex << " Converted value: " << setw(3) << n << endl;




				return 0;
			}



		}


		else if (x3 == 'h')    // hexadecimal to decimal
		{

			cout << "Enter the Hexadecimal value: ";
			cin >> hex >> n;


			cout << " Input value : " << setw(3) << showbase << hex << n << " Converted number is: "  << dec << n;


			return 0;

		}




	}

		//// question 4 with exit function
		if (val == 4)
		{
			exit(EXIT_SUCCESS);

		}










	return 0;



	/* The Documentation:
	All of the possibilities worked correctly and copied and pasted into the output.txt file. All of the questions work only once(until the third option). 
	Then they quit with the value 0. First question accepts a radian floating point number and then prints to three decimal places with the proper type of cosine. The options are 'c', 'a', and 'h'. 
	For the second question, it accepts a floating point number and and prints to three decimal places and a plus or minus sign with the proper type of logarithm.
	For the third question, it converts decimal to hexadecimal or the opposite. The values were asked for each question, then inputted with the prefixed base for hexadecimal numbers, and the whole numbers printed accordingly as a mini table. For the section decimal to hexadecimal, it has asked that if the user wants a lower or upper case values for printing hexadecimal values with the prefixed number.
	For the fourth question, The program exits with the exit function with the input of 4 by the user.
 
 Notes: -I mainly referred cplusplus.com for math equations.
 -I tried to use functions and stream manipulators as much as possible.
 */



















}
