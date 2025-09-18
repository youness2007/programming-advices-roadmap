#include <iostream>
using namespace std ;
int main ()
{
    int i =1 ;
    int sum = 0 ;
cout << "please enter a number : ";
int number ;
cin >> number;

while (i<=number)
{
    if  (i%2!=0)
    {
        sum = sum +i ;
    }
    i++ ;
}
cout << sum << endl ;



}