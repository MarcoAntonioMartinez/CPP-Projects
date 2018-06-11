/***************************************************************
Function Example 7:

Write a function that will calculate and return the sum of numbers
entered by the user. The user will indicate they are done entering
data by entering a value of -1.
***************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int calcSum();

int main()
{
int result;

result = calcSum();
cout << "The sum is "<<result<<endl;

cout << endl << endl << endl;

return 0;
}

int calcSum()
{
int userNum, sum = 0;

//priming read
cout << "Enter an integer(-1 to stop): ";
cin >> userNum;

while( userNum != -1)
 {
 sum += userNum;
 
 //secondary read
 cout<< "Enter another integer: ";
 cin >> userNum;
 } 
 
return sum;
}

