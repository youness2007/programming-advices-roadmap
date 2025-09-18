#include <iostream>
using namespace std ;
enum ennumbertype{odd=1 , even=2};

int readusernumber(int number)
{
cout <<"\nplease enter a number : \n";
cin >> number ;
return number ;



}

ennumbertype checknumbertype(int number)
{
int result = number % 2 ;
if (result == 0 )
{
return ennumbertype::even ;
}
else 
{
return ennumbertype::odd ;
}
}

void printnumbertype(ennumbertype numbertype)
{
if (numbertype==ennumbertype::odd)
{
cout <<"\n your number is odd. \n";

}
else
{
    cout <<"\nyour number is even.\n";
}

}
int main ()
{
    int number;
    printnumbertype(checknumbertype(readusernumber(number)));

    return 0 ;
}