//Objective:  calculate 3 persons ages
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
  cout << "Objective: set and output the forecasted high temperatures for any 5-day period for a city.\n"; 
  cout << "Programmer: Vinzent\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  //variables
double age1=12;
double age2=34;
double age3=40;
double avgAge;

string Label0= "This program will calculate the average age given 3 ages.";
string Label1= "The first age is";
string Label2= "The second age is";
string Label3=  "The third age is";
string Label4= "The average age is" ;


avgAge=(age1+age2+age3)/3;



  
  //output results
  cout <<Label0 <<endl;
  cout <<Label1 <<endl;
  cout <<age1  <<endl;
  cout <<Label2 <<endl;
  cout <<age2 <<endl;
  cout <<Label3 <<endl;
  cout <<age3 <<endl;
  cout <<Label4 <<endl;
  cout <<avgAge <<endl;



} // main