/* Enes Tasdibek
Exercise media main
This program will produce an array of media pointers
*/
/*
!!THIS IS THE MAIN FILE!!
This program will produce an array of media pointers. 
The argument of selection sort array of media pointers of with size N generated. Then the given main class 
 declares an array of three super media pointers. Along with all initializations in this main program, the 
 selection sort function is being added  that uses  overloaded < operator. This specific function is also 
 being transformed according to instructions. These example sets are a good example of showing super-sub class relationships, 
 along with dynamic binding with pointers and a basic sorting of media objects.
	*/
#include<iostream>
#include"media.h"
#include"movie.h"
#include"book.h"
using namespace std;

void sort(media* mm[], int N);  // selection sort array of media pointers of size N

int main()
{

	//You will then use the given main class that will declare an array of three super media pointers 
	// (so you can combine movies and books together in the array).
	//You will add a selection sort function to main that uses your overloaded < operator.
	media* m[3];   // array of three super media pointers
	int j;
	string name, rating, author;
	float price;
	name = "Planet of the Apes";
	price = 8.90;
	rating = "G";
	
	m[0] = new movie(name, price, rating);
	// address of sub object assigned into pointer element of array
	name = "Back to the Future";
	price = 13.90;
	rating = "PG";
	
	m[1] = new movie(name, price, rating);
	name = "Intensity";
	price = 7.90;
	author = "Dean Koontz";
	
	m[2] = new book(name, price, author);

	sort(m, 3);   // selection sort array of media pointers of size N

	for (j = 0; j < 3; j++)
	{
		m[j]->print();	// dynamic binding
		cout << endl;
	}
	return 0;
}


void sort(media* mm[], int N)  // !!build selection sort function!!
{


	int pass, j, min;
	
	//yield old version of char temp
	//char temp[20];
	//use media type instead;
	media* temp;

	for (pass = 0; pass <= N - 2; pass++)  // passes
	{
		min = pass;
		for (j = pass + 1; j < N; j++)  // in each pass
			//Compare the media object the array element is pointing at.
			if ( *mm[min] < *mm[j])
				min = j;
		//Change strcpy to directly use = assignment operator.  
		temp = mm[min];
		mm[min] = mm[pass];
		mm[pass] = temp;
	}




}
