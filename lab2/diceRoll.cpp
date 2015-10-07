//Objective:  roll 2 dice
//Name: Vinzent Davies
//Course: COMSC-110-5093
//Compiler: minGW
//Editor: Sublime Text 2

//libraries
#include <iostream> 
#include <cstdlib> 
#include <ctime> 
using namespace std; 
  

//Programmer defined data types
//NONE

//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
//NONE

//main program
int main()
{

  srand(time(0)); rand(); // "seed" the random number generator 

  // output my name and objective and program information
  cout << "Objective: This program will roll 2 dice and show the results.\n"; 
  cout << "Programmer: Teacher\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: VC++ 2010 Express\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  //variables
  int a; // the name of the first die 
  int b; // the name of the second die 
  int total; // the result 

  //roll dice
  a = 1 + rand() % 6; 
  b = 1 + rand() % 6; 
  total = a + b; 
  
  //output results
  cout << "Dice result: " << total << " (" << a << " and " << b << ")" << endl; 
} // main