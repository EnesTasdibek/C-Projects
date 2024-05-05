#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
//CSTRING ARRAY Palindrome TESTS - C++

//we declared an array of five cstrings (a 2-D character array).  
char cstring[5][80], * tokenptr;
void setData(char A[]);
bool palCheck(char B[]);
char reversed[80];

int main() {

   //In a loop, the user will input a cstring
   //  into a character array and send to user-defined functions.  
    for (int i = 0; i < 5; i++) {
       
        cout << "Enter your text: " << endl;
       
        cin.getline(cstring[i], sizeof(cstring), '\n');
       
        setData(cstring[i]);
       
        bool h = palCheck(cstring[i]);

      // Back in main, print the c - string(now in all lowercase and without the spaces and punctuation marks)
      //  and tell whether it is a palindrome or not.The program will 
      // loop through five inputs, function calls, and five outputs.
      
     if (h) {
       
   cout << "Therefore the input is a palindrome." << endl;
      
        }
     
    else {
       
            
    cout << "Therefore the input is not a palindrome." << endl;
      
        
        }
    
    }

  
    
    return 0;

}

//This c-string will be sent to a function that will remove all spaces and punctuation marks 
// from its c-string as well as change any uppercase letters to lowercase.  
void setData(char A[]) {

   
    tokenptr = strtok(A, " ,.!?;:+");



   
    char reference[80];
   
    int j = 0;
  
    while (tokenptr != NULL) {
     
    int len = strlen(tokenptr);
    
        for (int i = 0; i < len; i++) {




     
            reference[j++] = tolower(tokenptr[i]);

     
        }
     
        tokenptr = strtok(NULL, " ,.!?;:+");
    
    }
   

    //.  Make sure you include the \0 NULL as you use a cstring function to concatenate the tokens into a c-string.  
    reference[j] = '\0';
   

    // Then copy back into the original c-string for the pass by reference.
    strcpy(A, reference);//COPY The referenced data into original c-string for the pass by reference.




}


//Back in main, you will then send the cstring to a function that will see if it is really a palindrome or not. 
// You will need to create another cstring (that contains
//  the \0) that is filled up as the reverse of the argument c-string

bool palCheck(char B[]) {
   
    int len = strlen(B);


   // a simple recursion for reversing the cleared input
    for (int i = 0; i < len; i++) {
       
        reversed[i] = B[len - i - 1];
   
    }

   reversed[len] = '\0';

    
     cout << "Reversed string: " << reversed << endl;

    
 
    // Then use a cstring function to check to see if the c - string is a palindrome and return the boolean result.

     //a simple recursion for checking reversed word's letters one by one to see if it is a polindrome or not.
      for (int i = 0; i < len; i++) {
       
        
        if (B[i] != reversed[i]) {
        
           return false;
      
       }
   
    }
   
    
    return true; 
}


//DOCUMENTATION
/*In a loop, the user will input a cstring into a character array and send to user-defined functions.
This c-string will be sent to a function of setData that remove all spaces and punctuation marks from its c-string as well as change any uppercase letters to lowercase. 
I included the "\0 NULL" as I used a cstring function to copy the tokens into a c-string. 
Then copied back into the original c-string for the pass by reference. 
Back in main, I  then sent the cstring to a function that will see if it is really a palindrome or not.
By creating another cstring "(that contains the \0)" that is filled up as the reverse of the argument c-string. 
Then used a simple recursion to letter by letter with the initial array to check if the plaindrome is true by defined bollean value at the end.
Back in main, printed the c-string*/