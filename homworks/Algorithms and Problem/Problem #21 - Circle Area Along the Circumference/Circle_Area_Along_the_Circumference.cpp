#include <iostream>
#include<cmath>
using namespace std ;
float readarea()
{
float L ;// Circumference of the circle
cout << "please enter the Circumference of the circle : "; 
cin >> L ;
return L ;

}
float areacalculatore(float L)

    {
float π = 3.14 ;
  
float area = (pow(L,2) /(4*π));
        return area ;
    }
void printarea(float area)
{

cout << "the area of the circle along the circumference is : "<<area <<endl ;

}


int main ()
{

printarea(areacalculatore(readarea()));

return 0 ;











}