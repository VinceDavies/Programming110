//Objective:  calculate the distance in miles a ship at sea can see the lighthouse.
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
  cout << "Objective: calculate the distance in miles a ship at sea can see the lighthouse.\n"; 
  cout << "Programmer: Vinzent\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  
// formatting
cout.setf(ios::fixed);
cout << setprecision(0);



//prompt user for input
double height;
cout << "Please enter a height of a lighthouse in feet" <<endl;
cin >> height;
cin.ignore (1000,10);

//variables
double distance= sqrt((double)(0.8 * height));

string label1= "A ";
string label2 =" foot tall lighthouse can be seen from ";
string label3 =" miles away." ;






  
  //output results
  cout <<label1;
  cout <<height;
  cout <<label2;
  cout <<distance;
  cout <<label3;



} // main