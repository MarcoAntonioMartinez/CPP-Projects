/*
Problem 2
Write a program that will calculate a state income
tax. The tax will be assessed at 2 percent of the
taxable income for incomes less than or equal to
$30,000. For taxable incomes greater than $30,000,
the tax will be assessed at 2.5 percent of the
taxable income that exceeds $30,000, plus a fixed
amount of $600.

The user should be prompted for the taxable income.

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
//create variables  
double income, taxAmount;

//get the income from the user
cout<<"Enter your income";
cin>> income;

//if the income is less than or equal to 30000
// calculate tax at 2%
//else
// calculate tax at 600 plus 2.5% of income over 30000
//endif
if(income <= 30000)
 {
 taxAmount = income * 0.02; 
 }
else
 {
 taxAmount= 600 + (income - 30000 )*0.025
 }

//display the calculated tax

cout<< fixed << setprecision(2);

cout << "The tax amount is $" << taxAmount << endl;  
return 0;
}


