#include <iostream>    
#include <iomanip>



using namespace std;     



int main() 
{
int gallons, miles, milesPerGal;


cout<< "Enter the number of gallons of gas the car can hold: ";
cin>> gallons;

cout<< "Enter the number of miles that the car can be driven on a full tank: ";
cin>>miles;

milesPerGal = miles/gallons;

cout<<"The car can drive "<< milesPerGal<<" miles per gallon of gas";


return 0;                
}

