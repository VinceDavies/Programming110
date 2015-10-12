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


//prompt user for input
int years;
cout << "Please enter the amount of years that you will be saving money for." <<endl;
cin >> years;
cin.ignore (1000,10);

double interestRate;
cout << "Please enter the rate of interest that you wish to set. Example: 5.25=5.25%" <<endl;
cin >> interestRate;
cin.ignore (1000,10);

double deposit;
cout << "Please enter the amount that you will deposit each month." <<endl;
cin >> deposit;
cin.ignore (1000,10);
//variables


interestRate=interestRate/100;
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