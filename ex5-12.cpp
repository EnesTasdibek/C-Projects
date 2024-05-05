


#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include "rectangle5-12.h"
#include "colorrectangle5-12.h"
#include "cube5-12.h"

using namespace std;
//Created a main that declares an array of three rectangle pointers
int main(){



	rectangle512* r[3];


//assign to each element of the array (ex. spot 0 rectangle, spot 1 cube, spot 2 colored rectangle).



r[0] = new rectangle512;
r[1] = new cube512;
r[2] = new colorrectangle512;


//from virtual function; dynamic binding example, first label the adresses then print them.
//chapter 5 notes, page 60
for (int i = 0;i < 3;i++){


	cout << "adress 'is a': " << r[i] << "\n";

	r[i]->print();

}

}