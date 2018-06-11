/**********************************************************
Data Members

The Date class contains five data members that are not available to the
outside world. They are:

    * an integer to hold the month number
    * an integer to hold the day number
    * an integer to hold the year number
    * an array of integer constants that represent the number of days in each month
    * an array of constant pointers to character constants that represent the names of each of the months in a year

Place the following array declaration/initialization statements at the
top of the CPP file after the closing curly brace for the class definition.

const int Date::monthDays[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

* data types hold the address
const char * const Date::monthNames[13] = { "", "January", "February", "March", "April", "May",
                                      "June", "July", "August", "September", "October",
                                      "November", "December" };

Constructor: Date( int monthVal, int dayVal, int yearVal )

The constructor for this class is used to initialize a Date object
to a specific date. It takes three arguments: the initial month,
the initial day, and the initial year. The passed in values should
only be used if they are valid. The month value should be between
1 and 12, inclusive. If it is invalid, set the month to January.
The day value should be between 1 and the maximum number of days
in the current month, inclusive. If it is invalid, set the number
of days to the maximum for the current month. The year value
should be positive. If it is invalid, set the year to 2015.


void setDate ( int monthVal, int dayVal, int yearVal )

This method sets the date for the current object. It takes three
arguments: the value for the month, the value for the day, and the
value for the year. The passed in values should only be used if
they are valid. The month value should be between 1 and 12, inclusive.
If it is invalid, set the month to January.  The day value should be
between 1 and the maximum number of days in the current month, inclusive.
If it is invalid, set the number of days to the maximum for the
current month. The year value should be positive. If it is invalid,
set the year to 2015.


void printDateInfo()

This method prints the current date in the Date object in the
format "monthName day, year", the number of days that have passed in the,
year, and the number of days that remain in the year. For example, if the
month value is 11, day is 30, and year is 1977, then this method will
print:

November 30, 1977
334 days have passed
 31 days remain


int daysPassed()

This private method calculates and returns the number of days that have
passed from the beginning of the year up to and including the
current date in the Date object.


int daysLeft()

This private method calculates and returns the number of days that are
left in the current year in the Date object. This will only count
the days after the current date in the Date object.
**********************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

class Date
{
public:
	Date(int,int,int);
	
	void setDate(int, int, int);
	
	void printDateInfo();
	
private:
	int month,
		day,
		year;
	
	static const int monthDays[13];
	
	static const char* const monthNames[13];
	
	int daysPassed();
	int daysLeft();
};

const int Date::monthDays[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };


const char * const Date::monthNames[13] = { "", "January", "February", "March", "April", "May",
                                      "June", "July", "August", "September", "October",
                                      "November", "December" };



int main()
{
//Create a Date object
Date date1(11, 24, 2015);

//Display the Date objects information
date1.printDateInfo();

//Create a Date object with invalid values
Date date2 = Date(58, 42, -15);

//Display the Date objects information
date2.printDateInfo(); 


return 0;
}


/**********************************************************
Constructor: Date( int monthVal, int dayVal, int yearVal )

The constructor for this class is used to initialize a Date object
to a specific date. It takes three arguments: the initial month,
the initial day, and the initial year. The passed in values should
only be used if they are valid. The month value should be between
1 and 12, inclusive. If it is invalid, set the month to January.
The day value should be between 1 and the maximum number of days
in the current month, inclusive. If it is invalid, set the number
of days to the maximum for the current month. The year value
should be positive. If it is invalid, set the year to 2015.
**********************************************************/
Date::Date(int monthVal, int dayVal, int yearVal)
{
	//call set date method since constructor does same job as setDate
	setDate(monthVal, dayVal, yearVal);
}



/**********************************************************
void setDate ( int monthVal, int dayVal, int yearVal )

This method sets the date for the current object. It takes three
arguments: the value for the month, the value for the day, and the
value for the year. The passed in values should only be used if
they are valid. The month value should be between 1 and 12, inclusive.
If it is invalid, set the month to January.  The day value should be
between 1 and the maximum number of days in the current month, inclusive.
If it is invalid, set the number of days to the maximum for the
current month. The year value should be positive. If it is invalid,
set the year to 2015.
**********************************************************/
void Date::setDate(int monthVal, int dayVal, int yearVal)
{
	if(monthVal < 1 || monthVal>12)
	  month = 1;
	else
	  month = monthVal;
	
	if(dayVal < 1 || dayVal > monthDays[month])
	  day = monthDays[month];
	else
	  day = dayVal;
	
	if(yearVal<=0)
	 year = 2015;
	else
	  year = yearVal;
}


/**********************************************************
void printDateInfo()

This method prints the current date in the Date object in the
format "monthName day, year", the number of days that have passed in the,
year, and the number of days that remain in the year. For example, if the
month value is 11, day is 30, and year is 1977, then this method will
print:

November 30, 1977
334 days have passed
 31 days remain
**********************************************************/
void Date::printDateInfo()
{
	cout<<monthNames[month]<<" "<< day << ", " <<year << endl
		<<daysPassed()<<" days have passed"<< endl
		<<daysLeft()<<" days remain"<< endl;
}

/**********************************************************
int daysPassed()

This private method calculates and returns the number of days that have
passed from the beginning of the year up to and including the
current date in the Date object.
**********************************************************/
int Date::daysPassed()
{
int sum = 0;

for(int sub = 1; sub<month; sub++)
  {
  	sum += monthDays[sub];
  }
  
sum+=day;

return sum;  
}


/**********************************************************
int daysLeft()

This private method calculates and returns the number of days that are
left in the current year in the Date object. This will only count
the days after the current date in the Date object.
**********************************************************/
int Date::daysLeft()
{
	return 365 - daysPassed();
}

