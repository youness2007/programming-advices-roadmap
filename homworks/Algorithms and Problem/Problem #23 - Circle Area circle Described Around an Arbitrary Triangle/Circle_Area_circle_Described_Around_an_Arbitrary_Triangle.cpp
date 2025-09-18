#include <iostream>
#include <cmath>
using namespace std ;
float read_A__B__c(float a,float b,float c)
{
 
cout <<"please entre the lenght of side a      :";
cin >> a ;
cout << "please entre the length of the base b :";
cin >> b ;
cout << "please entre the length of side c     :";
cin >> c ;
}

float areacalculator(float a, float b, float c)
{
    float area ;
    float π = 3.14;
    double p = (a + b + c) / 2;
area = π * pow(((a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)))), 2) ;
    return area;
}
void printarea(float area)
{

cout << "the area is : "<<area<<endl ;

}

int main()
{
  float a,b,c ;
  read_A__B__c(a,b,c);
  printarea(areacalculator(a,b,c));
return 0;

}

