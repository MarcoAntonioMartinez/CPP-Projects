/*
Loop 2:
Write a loop that will find the largest value in a series
of positive numbers entered by the user. Before executing
the loop, prompt the user for the number of values that
will be entered.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
//create variables
int count, numTimes, userNum, largeVal;

largeVal = -99999; //something to compare

//get the number of times to execute the loop from the user

cout << "How many times?";
cin >> numTimes;

//for count starting from 0 through "-number of times" - one value at a time
// get a number from the user
// if number from the user is larger than the largest value
//  change largest value to the number from the user
// endif
//endfor

for (count = 0;count < numTimes ;count += 1 ;)
 {
	 cout << "Enter a number: ";
	 cin >> userNum;
	
	 if (userNum > largeVal)
	{
		largeVal = userNum;
	}
 } 

//display the largest value

cout<< "The largest value is "<< largeVal <<endl;
return 0;
}

