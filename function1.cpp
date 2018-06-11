/***************************************************************

***************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int cube( int ); //function prototype


int main()
{
int num, ans;

num = 2;
ans = cube( num );
cout << ans;


ans = cube( ans );
cout << ans;



ans = cube( 3 );
cout << ans;



cout << cube( ans/3 );


return 0;
}


int cube( int x )
{
int result;

cout << "In the function, x is " <<x<<endl;


  
result = x * x * x;
  
return result;
}
