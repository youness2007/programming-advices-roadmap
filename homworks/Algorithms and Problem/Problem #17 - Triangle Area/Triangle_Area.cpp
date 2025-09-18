#include <iostream>
using namespace std ;
void readarea( float base ,float height)
{
  cout <<"please entre the base of the triangle :";
   cin >> base ;
   cout << "please entre the height of the trinagle :";
   cin >> height ;

}
float areacalculator(float base ,float height)
{
 return float ( (1/2.0) * ( base * height ) );

}
void printarea(float area)
{
cout << "the area of your triangle is : " << area << endl ;

}
int main ()
{
   float base , height ;
 
 readarea(base , height);
 printarea(areacalculator(base , height));
    return 0;
}



