/* Roman Numeral Converter
Write a program that asks the user to enter a number within the range of 1 through
10. Use a switch statement to display the Roman numeral version of that number.
Input Validation: Do not accept a number less than 1 or greater than 10.
*/


#include <iostream>    
#include <iomanip>





using namespace std;     
int main() 
{

int num;

cout<< "Enter a number between 1 and 10: ";
cin>> num;


switch (num)
{
	case 1: cout<<"Roman Numeral: I";
			break;	
	case 2: cout<<"Roman Numeral: II";
	break;
	case 3: cout<<"Roman Numeral:III";
	break;
	case 4: cout<<"Roman Numeral:IV";
	break;
	case 5: cout<<"Roman Numeral:V";
	break;
	case 6 : cout<<"Roman Numeral:VI";
	break;
	case 7: cout<<"Roman Numeral:VII";
	break;
	case 8 : cout<<"Roman Numeral:VIII";
	break;
	case 9 : cout<<"Roman Numeral:VIV";
	break;
	case 10: cout<<"Roman Numeral:X";
	break;
	default: cout<< "You did not enter a valid number in the specified range";
}






return 0;                
}

