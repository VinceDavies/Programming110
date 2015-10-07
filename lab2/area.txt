#include <iostream> 
using namespace std; 
  
#include <cmath> 
  
int main() 
{ 
  double r; 
  double area; 
  double pi = 4 * atan(1.0); // 4 times the angle whose tangent is 1 

  // ask user to enter a circle's radius 
  cout << "Enter the radius of a circle: "; 
  cin >> r; 

  area = pi * r * r; 
  cout << " The area is " << area << endl; 
} // main