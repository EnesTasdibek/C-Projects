#include <iostream>
using namespace std;






void triple(int* pointer, int& reference);



int main()
{


    int a;
    int b;
    int c;

    cout << "Enter the first number: ";

    cin >> a;

    
    
  



    cout << "Enter the second number: ";

    cin >> b;

    


    //

    triple(&a, b);


    cout << "first: " << a << endl;
    cout << "second: " << b << endl;




    return 0;
}



void triple(int* pointer, int& reference)
{

    *pointer = *pointer * 3;

    reference = reference * 3;


}
