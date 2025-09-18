#include <iostream>
using namespace std ;
#include <cmath>

void powercalculator()

{
int Number ;
 cout << "please enter a number  " ;
  cin >> Number ;
  cout << "you number power of 2 is : " << round(pow(Number , 2)) << endl ;
  cout << "your number power of 3 is :" << round(pow (Number ,3 )) << endl ;
  cout << "your number power of 4 is :" << round(pow (Number,4)) << endl ;




}


int main ()
{
   powercalculator();
  return 0 ;








}