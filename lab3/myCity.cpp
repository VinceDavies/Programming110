//Objective:  set and output the forecasted high temperatures for any 5-day period for a city.
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
int temp1 = 71;
int temp2 = 74;
int temp3 = 80;
int temp4 = 71;
int temp5 = 69;

string Label1= "San Francisco, California forecast high temperatures:";
string Label2= "Sunday, September 13, ";
string Label3= " degrees";
string Label4= "Monday, September 14, ";
string Label5= "Tuesday, September 15, ";
string Label6= "Wednesday, September 16, ";
string Label7= "Thursday, September 17, ";
string Label8= "[source: weather.com]";

  
  //output results
  cout <<Label1 <<endl;
  cout <<Label2;
  cout <<temp1;
  cout <<Label3 <<endl;
  cout <<Label4;
  cout <<temp2;
  cout <<Label3 <<endl;
  cout <<Label5;
  cout <<temp3;
  cout <<Label3 <<endl;
  cout <<Label6;
  cout <<temp4;
  cout <<Label3 <<endl;
  cout <<Label7;
  cout <<temp5;
  cout <<Label3 <<endl;
  cout <<Label8;


} // main