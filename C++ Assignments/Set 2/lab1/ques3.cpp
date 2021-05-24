#include<iostream>
using namespace std;
int main() {
   float f, c;
   cout << "Enter temperature in Celsius: ";
   cin >> c;
   f = (9.0*c/5.0)+32;
   cout << "Equivalent Fahrenheit temperature is: " << f;
   return 0;
}