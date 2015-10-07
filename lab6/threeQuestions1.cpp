//Objective:  ask the user 3 addition or subtraction questions and let the user know whether they got each question correct or if not correct, then what is the correct answer.
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
  cout << "Objective:ask the user 3 addition or subtraction questions and let the user know whether they got each question correct or if not correct\n"; 
  cout << "Programmer: Vinzent\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  //variables
  string label1 ="3+3= ";
  string label2 =" 3-3= ";
  string label3 =" 2+2= " ;
  string label4 ="good job your answer is correct.";
  string label5 ="nice job but a better answer is: ";
  int answer1;
  int correctAnswer1=6;
  int answer2 ;
  int correctAnswer2=0;
  int answer3;
  int correctAnswer3=4;

  //run program and output results
  cout <<label1;
  cin >> answer1;
  cin.ignore (1000,10);
  if(answer1==correctAnswer1)
    cout <<label4<<endl;
  else
    cout <<label5 <<correctAnswer1 <<endl;
  cout <<label2;
  cin >> answer2;
  cin.ignore (1000,10);
    if(answer2==correctAnswer2)
    cout <<label4 <<endl;
  else
    cout <<label5 <<correctAnswer2 <<endl;
  cout<< label3;
  cin >> answer3;
  cin.ignore (1000,10);
    if(answer3==correctAnswer3)
    cout <<label4<<endl;
  else
    cout <<label5 <<correctAnswer3 <<endl;
} // main