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
  cout << "Objective: calculate how much cahnge is due given an amount paid\n"; 
  cout << "Programmer: Vinzent\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  //variables
string label1= "amount owed= " ;
string label2= "amount cash paid= ";
string label3= "Change due= ";
string label4= "Change paid out in= ";
string label5= "this many $100,000 bills= ";
string label6= "this many $10,000 bills= ";
string label7= "this many $5,000 bills= ";
string label8= "this many $1,000 bills= ";
string label9= "this many $500 bills= ";
string label10= "this many $100 bills= ";
string label11= "this many $50 bills= ";
string label12= "this many $20 bills= ";
string label13= "this many $10 bills= ";
string label14= "this many $5 bills= ";
string label15= "this many $2 bills= ";
string label16= "this many $1 bills= ";


//prompt user for input
int amountOwed;
cout << "Please enter an amount in dollars that is owed!" <<endl;
cin >> amountOwed;
cin.ignore (1000,10);


int cashPaid;
cout << "Please enter an amount in dollars to be paid!" <<endl;
cin >> cashPaid;
cin.ignore (1000,10);



int totalChangeDue = cashPaid - amountOwed;
int changeDue = totalChangeDue;

int thousand100 = changeDue / 100000;
changeDue = changeDue % 100000;
int thousand10 = changeDue /10000;
changeDue = changeDue % 10000;
int thousand5 = changeDue / 5000;
changeDue = changeDue % 5000;
int thousand = changeDue / 1000;
changeDue = changeDue % 1000;
int hundred5 = changeDue / 500;
changeDue = changeDue % 500;
int hundred = changeDue /100;
changeDue = changeDue % 100;
int fifty = changeDue / 50;
changeDue = changeDue % 50;
int twenty = changeDue / 20;
changeDue = changeDue % 20;
int ten = changeDue / 10;
changeDue = changeDue % 10;
int five = changeDue / 5;
changeDue = changeDue % 5;
int two = changeDue /2;
changeDue=changeDue%2;
int one = changeDue;
  
  //output results
  cout <<label1  <<endl;
 cout <<amountOwed  <<endl;
 cout <<label2  <<endl;
 cout <<cashPaid  <<endl;
 cout <<label3  <<endl;
 cout <<totalChangeDue  <<endl;
 cout <<label4  <<endl;
  
 if (thousand100!=0)
   cout <<thousand100  <<endl <<label5  <<endl;  
 if (thousand10!=0)
   cout <<thousand10  <<endl <<label6  <<endl; 
 if (thousand5!=0)
   cout <<thousand5 <<endl <<label7  <<endl; 
if (thousand!=0)
   cout <<thousand  <<endl <<label8  <<endl;
if (hundred5!=0)
 cout <<label9  <<endl <<hundred5  <<endl;
if (hundred!=0)
 cout <<label10  <<endl <<hundred  <<endl;
if (fifty!=0)
 cout <<label11  <<endl <<fifty  <<endl;
if (twenty!=0)
 cout <<label12  <<endl <<twenty  <<endl;
if (ten!=0)
 cout <<label13  <<endl <<ten  <<endl;
if (five!=0)
 cout <<label14  <<endl <<five  <<endl;
if (two!=0)
 cout <<label15  <<endl <<two  <<endl;
if (one!=0)
 cout <<label16  <<endl <<one  <<endl;

} // main