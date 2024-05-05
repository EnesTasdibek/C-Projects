#include <iostream>
#include <iomanip> 
using namespace std;

int getgrades(int*);

int howmany = 0, num, sum = 0;
float average;
int i;

int main()
{
	//max 15
	int grades[15];
	
	
	int* ptrgrade = grades;
	
	int count = getgrades(grades);
	
	
	//specifically referenced chapter 4 exercise 3.
	int total = 0, * numptr, * limitptr;
	
	numptr = ptrgrade;//initial
	limitptr = ptrgrade + count;  //end

	while (numptr < limitptr) 
	{
		total += *numptr;    
		
		numptr++;    
	}
	cout << "\nTotal is " << total << endl;


	
	//specifically referenced chapter notes 1 page 24.
	if (count > 0)
	{
		average = static_cast<float>(total) / count;
		cout << "Average grade is " << fixed << setprecision(1) << average << endl;
	}

	else {
	cout << "No grades were entered\n";

	}

	return 0;

}


//specifically referenced chapter notes 1 page 24.
int getgrades(int* grades) 
{

	for (i = 0; i <= 15;i++) {
		
		while (num != -1)
		{
			howmany++;
			//sum += num;
			cout << "Enter a grade (-1 to end)(max 15 grades in sequence):  ";
			cin >> num;
		
			*grades = num;
			grades++;
		
		}
		
	}

	//return the sum integer that does not include -1 (sentinel value).
	return howmany-1;

}