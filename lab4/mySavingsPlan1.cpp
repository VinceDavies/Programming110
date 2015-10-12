//Objective:  calculate how much money to save every month for number of years before retirement and how much money would you have when you retire.
//Name: Vinzent Davies
//Course: COMSC-110-5093
//Compiler: minGW
//Editor: Notepad

//libraries
#include <iostream>  
#include <iomanip>
#include <string>
#include <cmath>
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
  cout << "Objective: calculate how much money to save every month for number of years before retirement and how much money would you have when you retire.\n"; 
  cout << "Programmer: Vinzent\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  
// formatting
cout.setf(ios::fixed);
cout << setprecision(2);




//variables
int years=10;
double interestRate=.075;
double deposit=100;
double time=years*12;
interestRate = interestRate / 12;
double amountSaved=deposit * ((pow(1 + interestRate, time) - 1) / interestRate);




string label1 = "In ";
string label2 = " years at ";
string label3 = "%, $";
string label4 = " deposited per month will grow to $";







  
  //output results
  cout <<label1;
  cout <<years;
  cout <<label2;
interestRate = (interestRate * 100) * 12;
cout <<interestRate;
cout <<label3;
cout <<deposit;
cout <<label4;
cout <<amountSaved;

} // main