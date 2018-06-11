/*
Problem 1
Write a chunk of code that will test if the value in an integer
variable called num is odd. If it is odd, display
"Odd". Otherwise, display "Even".
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
//create a variable
int num;


//get a value from the user
cout << "Enter a number ":
	cin>> num;


//if the user value is even
// display "Even"
//else
//	display "Odd"
//endif

if(num % 2==0)
{
	cout << "Even"<< endl;
}
else
{
	cout << "Odd" <<endl;
}





return 0;
}

