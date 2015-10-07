#include <iostream>
using namespace std;
int main()
{
double c; // degrees Celsius
double f; // degrees Fahrenheit
// ask user to enter Fahrenheit
cout << "Enter the temperature in degrees Fahrenheit: ";
cin >> f;
c = 5 * (f - 32) / 9;
cout << " That's " << c << " degrees Celsius!" << endl;
} // main