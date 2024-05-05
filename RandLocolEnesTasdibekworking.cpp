

/*
Enes Tasdibek
A program that will insert random integers between 1 and 150 into a list and perform some calculations.
The user will be prompted to enter  number of elements that they want to be in their list.
Then the gotten many random numbers between 1 and 150 are put in the list with the "srand,"with a for loop.
Now, the integer value of random integer count are being put in a  for loop, then the numbers are being pushed back to list for the "count(user value)" times.
The same thing could be done easily by simply doing a sentinel input loop without even using srand function, but probably the instructions stated otherwise.
Used an output stream iterator to the screen to print the elements in the list after getting random numbers between 1-150.
The list shown after being sorted with sort() function (to increase credibility),
The sum is found,(iterated through to sum up the elements),
Then the mean (average is sum divided by size of list),two three decimal places,
Then theMedian (middle value - find the size and use the iterator to move up half way by iterating the iterator half the size times),
Here, there is a little trick, if you have even number, the median is average of the middle two numbers,
And we have the pointer to the second middle number, by doing (n/2 + n/2 -1) formula we will achieve the median value if the user enters an even number.
We are simply checking the remainder with modulus.
If the the size of the list is being divisible by even number with a remainder the median is middle value.
Else, the size of the list is being divisible by even number without a remainder, then the median is average of the middle two numbers.
And finally the range (used algorithms to find the highest and lowest and then take the difference between highest and lowest).
Note that they are used with algorithms(max,min_element functions).

Thanks for a great semester!

REFERENCES:
-EX6-3 on lists, EX6-6 on algorithms.
-https:// www.programiz.com/cpp-programming/list
*/

#include <iomanip>
#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <list>
#include <iterator>


using namespace std;

int main() {

	double sum = 0.0;

	double x;

	list<int> numbers;

	list<int>::iterator itr;


	int m1;
	int m2;

	//The user will be prompted to enter  number of elements that they want to be in their list.  

	cout << "Enter number of elements you want in your list (between 1-150)" << endl;

	cin >> x;



	srand(time(NULL));


	//Now, the integer value of random integer count are being put in a  for loop, then the numbers are being pushed back to list for the "count(user value)" times.
	//The same thing could be done easily by simply doing a sentinel input loop without even using srand function, but probably the instructions stated otherwise.
	for (int i = 0;i < x;i++) {

		numbers.push_back(rand() % 150 + 1);
	}


	cout << "List before being sorted" << endl;

	//First, used an output stream iterator to the screen to print the elements in the list.

	ostream_iterator<int> osit(cout, "\n");
	copy(numbers.begin(), numbers.end(), osit);



	numbers.sort();
	//Here the list shown after being sorted with sort() function (to increase credibility)

	cout << "\nSorted list:" << endl;

	//Find the sum (iterate through to sum up the elements), 

	for (itr = numbers.begin(); itr != numbers.end(); itr++) {

		sum += *itr;

		cout << *itr << " " << endl;
	}


	cout << "\nSum is: " << sum << endl;


	double avg = sum / x;

	//mean (average is sum divided by size of list),two three decimal places
	cout << "Mean is: " << fixed << setprecision(3) << avg << endl;


	int half = numbers.size() / 2;


	itr = numbers.begin();



	for (int j = 0;j < half;j++) {



		++itr;

	}

	//Median (middle value - find the size and use the iterator to move up half way by iterating the iterator half the size times),
	//Here, there is a little trick, if you have even number, the median is average of the middle two numbers, 
	//And we have the pointer to the second middle number, by doing (n/2 + n/2 -1) fromula we will achieve the median value if the user enters an even number.
	//We are simply checking the remainder with modulus. 
	//If the the size of the list is being divisible by even number with a remainder the median is middle value.
	//Else, the size of the list is being divisible by even number without a remainder, then the median is average of the middle two numbers.



	if (numbers.size() % 2 != 0) {
		cout << "Median is: " << *itr << endl;
	}

	else if (numbers.size() % 2 == 0) {
		cout << "Median is: " << (*itr + *--itr) / 2 << endl;//n/2 + n/2 -1

	}

	//and range (use algorithms to find the highest and lowest and then take the difference between highest and lowest).  
	itr = max_element(numbers.begin(), numbers.end());

	cout << "Maximum = " << *itr << endl;

	m2 = *itr;

	itr = min_element(numbers.begin(), numbers.end());

	cout << "Minimum = " << *itr << endl;


	m1 = *itr;



	int range = m2 - m1;





	cout << "Range is: " << range << endl;





	return 0;




}