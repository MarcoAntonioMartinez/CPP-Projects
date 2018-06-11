/*
Loop 3:
Write a loop that will display all of the multiples
of 6 that are between two numbers that are entered by
the user.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
// create variables
int count, lowerBd, upperBd;


//get the range ffrom the user
cout << "Enter the lower bound: ";
cin >> lowerBd;

cout << "Enter the upper bound: ";
cin >> upperBd;

//for count starting from lower bound to upper bound, one value at a time
//	if count is a multiple of 6
// 		display count
// endif
//endfor

for (count = lowerBd;count <= upperBd ; count++ ;)
{
if(count% 6==0 )
 {
 	cout << count <<endl;
 }	
}








return 0;
}

