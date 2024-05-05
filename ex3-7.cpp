/* Enes Tasdibek
Exercise 3-7
This program will generate random sentences
*/
#include<string>
#include<iostream>
#include<cstring>
#include<ctime>
#include<cmath>
#include<cctype>
using namespace std;

int main()
{
	char article[5][5] = { "the", "a", "one", "some", "any" };
	char noun[5][5] = { "boy", "girl", "dog", "town", "car" };
	char verb[5][8] = { "drove", "jumped", "ran", "walked", "skipped" };
	char preposition[5][6] = { "to", "from", "over", "under", "on" };
	char sent[36];
    
	//added to use with strcat function
	char punc[2][2] = {".", " "};

	
	int i;
	srand(time(NULL));



	for (i = 0; i <= 4; i++)
	{

	
	

		strcpy_s(sent, article[rand() % 5]);
		//character function is used
		
		sent[0] = toupper( sent[0]);
		strcat_s(sent, punc[1]);

		
		

		//cat them in order
		strcat_s(sent, noun[i]);
		strcat_s(sent, punc[1]);


		strcat_s(sent, verb[i]);
		strcat_s(sent, punc[1]);


		strcat_s(sent, preposition[i]);
		strcat_s(sent, punc[0]);

		cout << "Try " << i +1 << ":" << " " << sent << endl;




		
		

	}











	return 0;








}