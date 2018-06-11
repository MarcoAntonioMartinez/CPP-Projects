/*********************************************************
Implement a class called Coin that can be used to represent
a single coin of any value.

Data Members
* a double that holds the monetary value of the coin
* an array of 6 characters that holds the side of the coin
  that is facing up( "heads" or "tails")

Constructors
This class has two constructors. The default constructor (one
that takes no arguments) should initialize the value of the
coin to a penny (0.01) and the side should be initialized by
calling the toss() method that is described below.

The other constructor takes 1 argument: a double that holds the
initial value for the coin. The passed in argument should be
used to initialize the value of the coin. No error checking is
required. The side should be initialized by calling the toss()
method that is described below.

Methods

void toss()
This method simulates the tossing of the coin. It takes no
arguments and returns nothing.

The coin will be tossed by using the rand() function to
generate a random value of either 1 or 2. A value of 1 indicates
that the result of the coin toss was heads and that "heads"
should be copied into the side data member. A value of 2 indicates
that the result of the coin toss was tails and that "tails should
be copied into the side data member.

int getSide()
This accessor method returns the current side of the coin that is
facing up. It takes no arguments and returns an integer.

If "heads" is the side of the coin that is up, return 1. If "tails"
is the side of the coin that is up, return 2.

Note: The integer value is being returned because we don't know how
to return a character array at this point in the class (and it won't
be taught until the CSCI 241 class).

double getValue()
This accessor method returns the monetary value of the coin. It takes
no arguments.
*********************************************************/

#include <iostream>
#include <iomanip>
#include <cstring> //when working with str functions
#include <cstdlib>
#include <ctime>
using namespace std;

class Coin
{
public:
  Coin();			 //default constructor
  Coin(double);		//create any coin object we want
  
  void toss();
  int getSide();
  double getValue();
  		
private:
  double value;
  char side[6];	
	
};


int main()
{
//Set the random number generator and the formatting for the output

srand(1);

cout << fixed << setprecision(2);


//Create objects using the two constructors (default, quarter, and dime)

Coin coin1;

Coin coin2(0.25); //implicit

Coin coin3= Coin(0.10); //explicit



//Test 1: the getSide method for all 3 coins
//ternary condition
cout<< "coin 1 has "<<((coin1.getSide()==1)? "heads" : "tails") <<"up" << endl
	<< "coin 2 has "<<((coin2.getSide()==1)? "heads" : "tails") <<"up" << endl
	<< "coin 3 has "<<((coin3.getSide()==1)? "heads" : "tails") <<"up" << endl;

//Test 2: the getValue method for all 3 coins

cout<<endl <<endl
<<"coin 1 has the value " <<coin1.getValue()<<endl
<<"coin 2 has the value " <<coin2.getValue()<<endl
<<"coin 3 has the value " <<coin3.getValue()<<endl;

//Test 3: the toss method (toss each coin 5 times and display result)

for (int cnt =1; cnt<=5; cnt++)
{
coin1.toss();
coin2.toss();
coin3.toss();

cout<< "coin 1 has "<<((coin1.getSide()==1)? "heads" : "tails") <<"up" << endl
	<< "coin 2 has "<<((coin2.getSide()==1)? "heads" : "tails") <<"up" << endl
	<< "coin 3 has "<<((coin3.getSide()==1)? "heads" : "tails") <<"up" << endl;
cout<<"---------------------------"<<endl;
}

//----------------------------------------------------------
//----------------------------------------------------------
//----------------------------------------------------------

/* Now use the Coin class to implement a simple coin flip game

The concept of the game is fairly simple. A player will have three
coins: a nickel, dime, and quarter and a starting balance of $0.00.

During each round of the game, each one of the coins will be tossed.
When a coin is tossed, if it lands heads-up, it's value will be added
to the balance. If it lands tails-up, nothing will be added to the
balance. The game will continue until the balance reaches $1.00 or more.

If the balance is exactly $1.00, the player won the game. If the
balance exceeds $1.00, the player lost the game. */

//set the random number generator and the formatting for the output
srand(time(0));
cout<< fixed<< setprecision(2);

double total = 0.00;

//passing in the values we want to use
Coin quarter(0.25), dime(0.10), nickel(0.05);

while(total < 1.00)
{
	quarter.toss();
	if(quarter.getSide()==1)
	{
		total +=quarter.getValue();
		cout<<"Quarter: heads" <<endl;
	}
	else
	{
		cout<<"Quarter: tails"<<endl;
	}
	
	dime.toss();
	if(dime.getSide()==1 )
	{
		total+= dime.getValue();
		cout<<"Dime: heads" <<endl;
	}
	else
	{
		cout<<"Dime: tails"<<endl;
	}
	
	nickel.toss();
	if(nickel.getSide()==1)
	{
		total+=nickel.getValue();
		cout<<"Nickel: heads"<<endl;
	}
	else
	{
		cout<<"Nickel: tails"<<endl;
	}
	
	cout<<endl<<endl<<"The total is "<<total;
	
}
if(total ==1.00)
	{
		cout<<" You won!!"<<endl;
	}
	else
	{
		cout<<" You lost!!"<<endl;
	}
return 0;
}


/*********************************************************
Constructor 1:
The default constructor (one that takes no arguments) should
initialize the value of the coin to a penny (0.01) and the
side should be initialized by calling the toss() method that
is described below.
*********************************************************/

Coin::Coin()
{
value = 0.01;

toss(); //initialize side
}


/*********************************************************
Constructor 2:
The other constructor takes 1 argument: a double that holds the
initial value for the coin. The passed in argument should be
used to initialize the value of the coin. No error checking is
required. The side should be initialized by calling the toss()
method that is described below.
*********************************************************/

Coin::Coin(double newValue)
{
value = newValue;

toss();
} 

/*********************************************************
void toss()
This method simulates the tossing of the coin. It takes no
arguments and returns nothing.

The coin will be tossed by using the rand() function to
generate a random value of either 1 or 2. A value of 1 indicates
that the result of the coin toss was heads and that "heads"
should be copied into the side data member. A value of 2 indicates
that the result of the coin toss was tails and that "tails should
be copied into the side data member.
*********************************************************/

void Coin::toss()
{
int randNum = rand() % 2 + 1; //get value of 1 or 2 or see if the rand is even or odd

if(randNum ==1)
{
	strcpy(side, "heads");
}

else
{
	strcpy(side, "tails");
}

}
/*********************************************************
Access Method 1: int getSide()

This accessor method returns the current side of the coin that is
facing up. It takes no arguments and returns an integer.

If "heads" is the side of the coin that is up, return 1. If "tails"
is the side of the coin that is up, return 2.

Note: The integer value is being returned because we don't know how
to return a character array at this point in the class (and it won't
be taught until the CSCI 241 class).

*********************************************************/

int Coin::getSide()
{
if (strcmp(side,"heads") == 0)	//if side has heads then check if the value is 0
 return 1;
 else
 return 2;	
}



/*********************************************************
Access Method 2: double getValue()

This accessor method returns the monetary value of the coin. It takes
no arguments.
*********************************************************/

double Coin::getValue()
{
return value;	
}
