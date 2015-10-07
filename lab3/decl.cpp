//Objective:  output assigned data values with labels.
//Name: Vinzent Davies
//Course: COMSC-110-5093
//Compiler: minGW
//Editor: Notepad

//libraries
#include <iostream>  
#include <string>
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

  

  // output my name and objective and program information
  cout << "Objective: output assigned data values with labels.\n"; 
  cout << "Programmer: Vinzent\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  //variables
int lucky = 12;
string movie = "The Dark Knight";
string initial = "J";
double coin = 0.05;



  
  //output results
  cout <<"My lucky number is " <<endl;
  cout <<lucky <<endl;
  cout <<"My favorite movie is "<<endl;
  cout <<movie <<endl;
  cout <<"My middle initial is " <<endl;
  cout <<initial <<endl;
  cout <<"My favorite coin is this fraction of a dollar: $"<<endl;
  cout <<coin <<endl;

} // main