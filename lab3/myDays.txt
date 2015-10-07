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
  cout << "Objective: calculate how many days old you will be on the due date for this lab.\n"; 
  cout << "Programmer: Vinzent\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  //variables
string DOB = "October 14, 1991";
string dueDate = "September 20, 2015";
string Label1="Date of birth: ";
string Label2= "Due date: ";
string Label3 ="Age in days: ";

int yearsOld = 23;
int days=0;
int leapYears=yearsOld/4;
int julianBirthdate = 287;
int julianDueDate = 263;  //sum of all days in each month up to month and date of due date
int daysToEndOfYear=0;

daysToEndOfYear = 365 - julianDueDate;
days = 365 * yearsOld;
days = days + leapYears;
days = days - julianBirthdate;
days = days - daysToEndOfYear;


  
  //output results
  cout <<Label1 <<endl;
  cout <<DOB <<endl;
  cout <<Label2 <<endl;
  cout <<dueDate <<endl;
  cout <<Label3 <<endl;
  cout <<days <<endl;
  





} // main