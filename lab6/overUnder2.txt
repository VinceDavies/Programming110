//Objective:  randomly generate an integer between 1 and 10, input user guess as to what number it is, 
//and output "correct!" if the user guess is the random number, or "high" if the user guess is too 
//high, or "low" if the user guess is too low.
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
  cout << "Objective: This program will generate a random number between 1 and 100 that needs to be guessed by the user\n"; 
  cout << "Programmer: Vinzent\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: min GW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  //variables
  int guess; 
  int number = 1+ rand() % 100; 

  //prompt user for input
  while (true){
    cout << "Please enter your guess between 1 and 100" << endl;
    cin >> guess;
    cin.ignore (1000,10);
    if (guess==number)
      break;
    if (guess>number)
      cout<<"your guess is too high"<<endl;
    if (guess<number)
      cout<<"your guess is too low"<<endl;
  }
  
  //output results
  cout << "correct!"<<endl;
} 