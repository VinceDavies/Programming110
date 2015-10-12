//Objective: calculate monthly mortgage payment over a 30 year payback period.

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
  cout << "Objective: calculate monthly mortgage payment over a 30 year payback period.\n"; 
  cout << "Programmer: Vinzent\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  





//variables
double p=270000;
double interestRate=.05125;
double paybackPeriod=30;
double payment;
double n = paybackPeriod *12;
double r = interestRate / 12;

payment = ((p * pow ((1 + r),n) * r)) / (( pow((1 + r),n) - 1));

interestRate=interestRate*100;
string label1 ="Amount borrowed = $";
string label2 ="Annual interest rate = ";
string label3 ="%";
string label4 ="Payback period = ";
string label5 =" Years";
string label6 ="Monthly payment = $";

// formatting
//cout.setf(ios::fixed);
//cout << setprecision(2);

  
  //output results
cout <<label1;
cout <<p <<endl;
cout <<label2;
cout <<interestRate;
cout <<label3 <<endl;
cout <<label4;
cout <<paybackPeriod;
cout <<label5 <<endl;
cout <<label6;
cout <<payment <<endl;




} // main