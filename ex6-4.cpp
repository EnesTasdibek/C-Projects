#include<iostream>
#include<set>
#include<string>
#include<iterator>
#include<algorithm>
using namespace std;
//Chapter 6 - Exercise 4 - STL sets, due 11-25-23
//REFERENCES: Chapter 6 notes, page 36.
int main()
{
    string name;
    int ans, pos;
    bool found = false;
    
    //--------
    // declare set of strings vm
    set<string> vm; 
    // declare set iterator vmit
    set<string>::iterator vmit; 
    // declare iterator to cout osit
    ostream_iterator<string> osit(cout, "\n"); 
    // declare pair of set of string iterator named p
    pair<set<string>::iterator, bool>  p; 
    
    
    //--------

    cout << "Enter movie name (-1 to end):  ";
    getline(cin, name, '\n');
    while (name != "-1")
    {

        
        
        //--------
        // insert name into set, assign to pair object
        
        p = vm.insert(name); 
        // if pair's second field is true, print pair's first field value and say was inserted
        if (p.second)
            cout << *p.first << " inserted.\n"; 
        // else print pair's first field value and say was already in set
        else
            cout << *p.first << " already in set.\n"; 
        
        cout << "Enter movie name (-1 to end):  ";
        
        
        
        //--------
        
        
        getline(cin, name, '\n');
    
    }

    cout << "Enter 1 to insert, 2 to delete:  ";
    cin >> ans;
    if (ans == 1)
    {
        cout << "Enter movie name:  ";
        cin.ignore(1, '\n');
        getline(cin, name, '\n');
        
        
        //--------
        // insert name into set, assign to pair object
        
        p = vm.insert(name); 
        // if pair's second field is true, print that pair's first field value was inserted
        
        if (p.second)
            cout << *(p.first) << " inserted.\n"; 
        // else print that pairs' first field was already in set
        else
            cout << *(p.first) << " already in set.\n"; 
        
        
        //--------
    
    }

    else if (ans == 2)
    {
        cout << "Enter movie name to delete:  ";
        cin.ignore(1, '\n');
        getline(cin, name, '\n');

        
        //--------
        
        // find name in set, return to iterator
        vmit = vm.find(name); 
        //iterator vmit
        
        // if iterator is not at the end of set
        if (vmit != vm.end()) 
            
        {
            // print what iterator is pointing at to say will be deleted
            cout << *vmit << " will be deleted.\n"; 
            // delete that name from set
            vm.erase(vmit); 
            
        
        //--------
        }
        else
            cout << name << " not in set\n";
    }
        
        
        //--------
        
        // print size
            cout << "Number of movies in set is " << vm.size() << "\n"; //size
        // copy set to cout iterator
            copy(vm.begin(), vm.end(), osit); 
    
        
        //--------
}
