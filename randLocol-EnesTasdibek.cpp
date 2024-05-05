

/*
Enes Tasdibek
This program will





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

	int sum=0;

	int x;

	list<int> numbers;

	list<int>::iterator itr;


	int m1;
	int m2;

	cout << "Enter number of integers between 1-150" << endl;

	cin >> x;

	srand(time(NULL));

	for (int i = 0;i < x;i++) {

		numbers.push_back(rand() % 150 + 1);
	}


	cout << "List before being sorted" << endl;

	ostream_iterator<int> osit(cout, "\n");
	copy(numbers.begin(), numbers.end(), osit);



		numbers.sort();


	cout << "\nSorted list:" << endl;



	for (itr = numbers.begin(); itr != numbers.end(); itr++) {

			sum += *itr;

			cout << *itr << " " << endl;
		}


	cout << "\nSum is: " << sum << endl;


	double avg = sum / x;


	cout << "Average is: "  << fixed << setprecision(3)<< avg << endl;


	int half = numbers.size() / 2;


		itr = numbers.begin();
		


	for (int j = 0;j < half;j++) {


		
			++itr;
		
	}
	
	
	if (numbers.size() % 2 != 0) {
	cout << "Median is: " << *itr << endl;
	}
	
	else if (numbers.size() % 2 == 0) {
		cout << "Median is: " << ( *itr+*--itr) / 2 << endl;//n/2 + n/2 -1

	}

	
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