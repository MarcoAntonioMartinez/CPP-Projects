#include <iostream>    
#include <iomanip>
#include <fstream>
#include <cstdlib>

using namespace std;     
int main() 
{
char ch;
int charCnt = 0;

ifsteam in;

in.open("input.txt");
if(in.fail())
  {
  cout <<"input file did not open" << endl;
  exit(-1);
  }
    
//cout << "Enter a character: ";
//cin >> ch;

in >> ch;

//while(ch != '!')
while (in)
  {
  cout << "The character is " << ch << endl;
  charCnt ++;
  
  //cout <<"Enter another character: "	;
  //cin >> ch;
  in >> ch;
  }
 
cout << endl << endl <<"Character count "<<charCnt<<endl; 

in.close();

return 0;                
}

