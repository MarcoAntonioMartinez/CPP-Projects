/*
Loop 1:
Write a for loop that will add up the numbers from 200 through 240, inclusive,
and then display the resulting sum.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
//create variables
int count, sum = 0;// starting point at 0 for sum

//for count starting at 200 through 240 - one value at a time
// add count to sum
//endfor

for(count= 200;count<=240 ;count = count + 1 )
{
sum += count;	//sum = sum + count;
}


//display the sum
cout << "The sum is " << sum << endl;

return 0;
}

