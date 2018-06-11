/*********************************************************
Write a COMPLETE C++ program that will calculate and
display the area of a triangle. You should prompt the
user for the base and height of the triangle and then
calculate the area using the following formula:

Triangle area = 1/2 * base * height

The results (**AFTER** the prompts for base and
height) should be similar to:

*************************
Area Calculator

Base:      XXXXX.XX
Height:    YYYY.YYY
Area:      ZZZ.ZZ
*************************


*********************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{// create variables
	double baseVal, heightVal, triArea;
		
	//get the base and height values from the user
cout << "Enter the base value: ";
cin >> baseVal;

cout << "\nEnter the height value: ";
cin >> heightVal;

//calculate the triangle area

triArea = 1/2.0 * (baseVal * heightVal);

//display the area

cout << endl << endl
     << "**********************" << endl
     << "Area Calculator" << endl << endl
     << "Base      " << baseVal << endl
     << "Height    " << heightVal << endl
     << "Area      " << triArea << endl
     << "**********************" << endl;


//the following code demonstrates how to create the output using multiple
//cout statements rather than one long cout statement.
     
cout << endl << endl;
cout << "**********************" << endl;
cout << "Area Calculator" << endl << endl;


return 0;
}

	
