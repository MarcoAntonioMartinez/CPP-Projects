/***************************************************************
Function Example 8:

Write a function that will calculate and return the factorial of
an integer number. The number should be passed in as an argument.
***************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int calcFactorial(int);

int main()
{
cout <<calcFactorial(4);
cout << endl << endl << endl;

return 0;
}

int calcFactorial(int num)
{
int cnt, prod = 1;

//cnt = 2 if you want to skip first iteration of loop
for( cnt = 1; cnt <= num; cnt++)
 {
 prod *=cnt;	
 }

return prod; 
}


