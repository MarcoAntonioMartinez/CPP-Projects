/*
Problem 3
Write a program that will perform temperature
conversions. The user should be prompted for two
items: one is a temperature (floating point value)
and the other is whether the temperature is a
Fahrenheit or Celsius temperature (string). After
the values have been entered, convert the
temperature to the opposite type (ie. if it was
Fahrenheit, convert it to Celsius?) and display
the result.

Use the following formulas:

Celsius = 5/9 * ( Fahrenheit - 32 )

Fahrenheit = Celsius * 9/5 + 32
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
 //create variable
 double temp,convTemp;
 
 string tempType;
 
 //get the temperature and the temperature type from the user
 
 cout<< "Enter the temperature: ";
 cin>> temp;
 
 cout <<"Enter the temperature type (F or C): ";
 cin >> tempType;
 
 //if the temperature type is fahrenheit
 // convert the temperature to celsius
 // display the converted temperature 
 //else
 // convert the temperature to fahrenheit
 //	display the converted temperature
 //endif
 
if (tempType == "F")
{
	convTemp = 5/9.0 *(temp - 32);
	cout << temp << " degrees fahrenheit is " << convTemp << " degrees celsius" << endl;
}
 else
 {
 	if(tempType == "C")
	 {
	convTemp = temp * 9/5.0 + 32;
 	cout << temp << " degrees celsius is "<< convTemp<< " degrees fahrenheit" << endl;
	 }
	else
	{
		cout << "You entered an invalid type." << endl;
	}
 }
 
 
 
 
 
 
 
 
return 0;
}


