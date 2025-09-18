// homwork 2 using while loop
#include <iostream> 
using namespace std ;
void powercalculator()
{
    int number ;
    int power ; 
    int p = 1 ;
    int counter = 0 ;
cout <<"please enter a number :\n";
cin >> number ;
cout << "please enter a power :\n";
cin >> power ;
if (power == 0 )
{

cout << number <<"power of 0 = "<< p << endl ;

}
else if (power > 0 )
{
  

while (counter < power)
{
  p=p*number;
counter = counter + 1 ;

}
cout<<number << "power of "<< power << " = "<< p << endl ;



}




}
int main ()
{
powercalculator();
return 0 ;
}

// homwork 1 using cmath library 

/*
#include <iostream>
#include <cmath>
using namespace std ;


void powercalculator()
{

int Number , M ;
cout <<"please enter a number ";
cin >> Number ;
cout <<"please enter a power ";
cin >> M ;
cout << Number <<" the  power of "<< M <<" is :" << round(pow(Number , M)) << endl ;


}


int main ()
{
powercalculator();

 return 0 ;







}
 */