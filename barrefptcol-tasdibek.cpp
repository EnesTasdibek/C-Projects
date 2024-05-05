#include <iostream>
#include <cstdlib>
#include <ctime>
#include <time.h>

using namespace std;

/*Enes Tasdibek.
~~BAR CHART ASSIGNMENT~~
Created a program to produce a horizontal bar chart of three bars made up of three different symbols.
The lengths of the bars will be determined by random numbers (so it will be like a contest to
see which symbol has the longest bar in the chart).Then the winner will be decided by the program.
It will use a main function and two user defined functions.  */

void refrandom(int& a, int& b, int& c);

void pointfill(int length, char temp, char* array);

int main()

{

    srand(time(NULL));

    /*Three integer variables will be declared for the length of the three bars.  Three character arrays
    of up to size thirty will be declared to hold the
    cstring made up of the multiple character
    symbols in the array.  */

    int int1;
    int int2;
    int int3;

    char array1[30];
    char array2[30];
    char array3[30];

    /*The refrandom function (see below) will
    be called and the three integers will be passed as
    reference variables (not pointers) with a void return.  */
    refrandom(int1, int2, int3);

    // The three integer variables will then be printed to show they received values by reference
    cout << int1 << " " << int2 << " " << int3 << endl;

    /*The pointfill function (see below) will then be called, to fill
    up the first character array, with three arguments - the value
    of the first integer variable (the length of the first bar will
    not change so pass by value), the character @ value (the symbol to draw the first bar out
    of will not change so pass by value), and the address of the first character array (to fill it
    up with the first integer number of @ symbols and the
    array will change so pass the constant pointer address
    of the array into a pointer variable).  .*/

    pointfill(int1, '@', array1);

    pointfill(int2, '~', array2);

    pointfill(int3, ';', array3);

    // Print the chart
    cout << array1 << "\n" << array2 << "\n" << array3 << endl;

    //The winner is the bar with the most number of characters
    //A simple comaparison loop to find who has more characters
    if (int1 > int2 && int1 > int3)
    {
        cout << "the @ won!" << endl;

    }

    else if (int2 > int1 && int2 > int3)
    {

        cout << "the ~ won!" << endl;
    }
    else if (int3 > int1 && int3 > int2)
    {


        cout << "the ; won!" << endl;
    }
    else
    {
        cout << "tie!" << endl;
    }

    return 0;
}

/*function that will accept three
integer reference parameters and since they are reference variables will
have a void return.
In the function, the three reference variables will be assigned a random number between 1 and 30.  */


void refrandom(int& a, int& b, int& c)

{

    a = rand() % 30 + 1;

    b = rand() % 30 + 1;

    c = rand() % 30 + 1;

}

/*!This section has been specifically referred to chapter 4-exercise 3.!
The value of the length of the bar, the value of the character to draw the bar out of,
and a variable character pointer that will accept the address of a constant character array.
Because the function knows the address of the array, it is a void return.
This pointer will increment through the array with pointer notation in a while pointer comparison loop.
(comparing to a limit pointer holding the ending address of the array,
which is the length of the bar spots from the beginning of the array). */
void pointfill(int length, char temp, char* array)
{

    char* numptr = array;

    char* limitptr = array + length;

    while (numptr < limitptr)

    {

        *numptr = temp;

        numptr++;

    }


    *numptr = '\0';

    //When the loop is over, assign a \0 to where the pointer is pointing (to end the cstring).
}
