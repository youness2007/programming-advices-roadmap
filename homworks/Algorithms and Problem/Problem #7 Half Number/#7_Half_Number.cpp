#include <iostream>
using namespace std ;


int readusernumber()
{
int number ;
cout << "please enter a number : \n";
cin >> number;
return number ;

}

float calculathalfnumber(int number)
{

float halfnumber = float(number)/2 ;


return (float)halfnumber ;
}

void printuserinfo(int number)
{

string result = "the half number of "+ to_string(number) + " is : " + to_string(calculathalfnumber(number)) ;
cout << endl << result ;



}
int main ()
{
printuserinfo(readusernumber());
return 0 ;
}