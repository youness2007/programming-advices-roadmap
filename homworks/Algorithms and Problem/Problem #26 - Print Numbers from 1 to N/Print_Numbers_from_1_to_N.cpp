#include <iostream>
using namespace std ;


int readnumber(int &number)
{

 
cout <<"please enter a number : ";
cin >> number  ;
return number ;

}
int numberloop()
{
int number ;
int i=1 ;
while(i<=number)
{

cout << i <<endl ;
i++ ;

}

}
int main ()
{
int number ;
readnumber(number);






return 0 ;
}
