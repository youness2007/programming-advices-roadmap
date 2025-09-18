#include <iostream>
using namespace std ;
int main ()
{
int num ;
int sum = 0 ;
while (num!=-99)
{
cout << "please enter a number : \n" ;
cin >> num ;
if (num != -99)
{
    sum = sum + num ;
}


}
cout << sum << endl ;
return 0 ;
}