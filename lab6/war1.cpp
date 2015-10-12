//Objective:  simulate war card game
//Name: Vinzent Davies
//Course: COMSC-110-5093
//Compiler: minGW
//Editor: notepad

//libraries
#include <iostream> 
#include <cstdlib> 
#include <ctime> 
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
  srand(time(0)); rand(); // "seed" the random number generator 

  // output my name and objective and program information
  cout << "Objective: This program will simulate the card game war.\n"; 
  cout << "Programmer: Vinzent\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: mingw\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  //variables
int compCard=1+1+ rand() % 13; 
int humanCard=1+1+ rand() % 13; 
int compSuit=rand() % 3;  
int humanSuit=rand() % 3; 
string cSuit;
string hSuit;
string cCard;
string hCard;
string label1 ="human wins!";
string label2 ="comp wins!";
string label3 ="it is a tie!";
string label4 ="Computer's card is a ";
string label5 ="Human card is a ";
string label6 =" of ";
  
  //processing
  if (compSuit==0 )
    cSuit="spades";
  if (compSuit==1 )
    cSuit="diamonds";
  if (compSuit==2 )
    cSuit="hearts";
  if (compSuit==3 )
    cSuit="clubs";
  if (humanSuit==0 )  
    hSuit="spades";
  if (humanSuit==1 )  
    hSuit="diamonds";
  if (humanSuit==2 )  
    hSuit="hearts";
  if (humanSuit==3 )  
    hSuit="clubs";
  if (compCard==11 )
    cCard="Jack";
  if (compCard==12 )
    cCard="Queen";
  if (compCard==13 )
    cCard="King";
  if (compCard==14 )
    cCard="Ace";
  if (humanCard==11) 
    hCard="Jack";
  if (humanCard==12) 
    hCard="Queen";
  if (humanCard==13)
   hCard="King";
  if (humanCard==14) 
    hCard="Ace";



  //output results
  cout << label4 ;
   if (compCard<11) //handle cases where cards are not face cards
 cout <<compCard;
 

  cout <<cCard <<label6 << cSuit <<endl;

  cout << label5 ;
  if (humanCard<11) //handle cases where cards are not face cards
     cout <<humanCard;
  
cout <<hCard <<label6 <<hSuit  <<endl;


if (humanCard>compCard)  
 cout<< "human wins!";
if (humanCard==compCard) 
  cout<< "tie!";
if (humanCard<compCard)  
 cout<<"computer wins!";
} 