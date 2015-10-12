//Objective:  coin toss
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
  cout << "Objective: This program will flip a coin and display result.\n"; 
  cout << "Programmer: Vinzent\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: VC++ 2010 Express\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  //variables
  int flip;  
  string coin; 
  string label1="The result of the coin flip is";
  
  //processing
  flip = rand() % 2; 
  if (flip==0)
    coin=" tails";
  else
    coin=" heads";

  //output results
  cout << label1 <<coin << endl; 
} 