#include <iostream>
#include <cmath>
using namespace std ;

void readradius(float &radius )
{
 cout <<"please entre the radius of your circle :";
    cin >> radius;


}
float areacalculator(float radius )
{
    float pi = 3.14159;
    return pi * pow(radius, 2);
}
void printarea(float area)

{
cout << "the area of your circle is : "<<area <<endl ;
}

int main ()
{
    
    float radius;
   readradius(radius);
   printarea(areacalculator(radius));
  

    return 0;
}