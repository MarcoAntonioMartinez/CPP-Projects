#include <iostream>    
#include <iomanip>
#include <fstream>
#include <cstdlib>

using namespace std;     
int main() 
{
char ch;
int charCnt = 0;

ifstream in;

in.open("input.txt");
if(in.fail())
  {
  cout <<"input file did not open" << endl;
  exit(-1);
  }
    
//cout << "Enter a character: ";
//cin >> ch;

//in >> ch; //for the characters not whitespace

ch = in.get();

//while(ch != '!')
while (in)
  {
  cout <<ch;  //needed for program, to read file
  charCnt ++; //counts the number of characters
  
  //cout <<"Enter another character: "	;
  //cin >> ch;
  //in >> ch;
  ch = in.get();
  }
 
cout << endl << endl <<"Character count "<<charCnt<<endl; 

in.close();

return 0;                
}

