#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
srand(time(0)); rand(); // "seed" the random number generator
int n = 5; // deal this many cards
for (int i = 0; i < n; i++)
{
int value = 1 + rand() % 13;
int suit = rand() % 4;
switch (value)
{
case 1:
cout << "Ace";
break;
case 11:
cout << "Jack";
break;
case 12:
cout << "Queen";
break;
case 13:
cout << "King";
break;
default:
cout << value;
} // switch
switch (suit)
{
case 0:
cout << " of Spades" << endl;
break;
case 1:
cout << " of Hearts" << endl;
break;
case 2:
cout << " of Diamonds" << endl;
break;
case 3:
cout << " of Clubs" << endl;
} // switch
} // for
} // main
