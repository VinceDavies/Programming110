#include <iostream>
using namespace std;
int main()
{
double c; // degrees Celsius
double f; // degrees Fahrenheit
// ask user to enter Fahrenheit
cout <<"This program will convert a temperature from Celsius to Farenheit. enter -999 to quit" <<endl;
while (true){
cout << "Enter the temperature in degrees Fahrenheit: ";
cin >> c;
if(c==-999) break;
f = 9.0 / 5.0 * c + 32.0;
cout << c << static_cast<unsigned char>(0xF8)
<<" Celsius is " << f << static_cast<unsigned char>(248)<<" farenheit!" << endl;

}
} // main