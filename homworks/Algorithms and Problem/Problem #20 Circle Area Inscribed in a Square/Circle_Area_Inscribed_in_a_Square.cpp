#include <iostream>
using namespace std ;
#include<cmath>
float reads()
{
float S ; // side of the square 
cout << "please enter the side of the square : " ;
cin >> S ;
return S ;

}
float areacalculator( ) 
{
    float π = 3.14 ;
    float S;// S side of the square 
    return (π * pow (S ,2 ))/4 ;
}


void printarea(float area)
{
    cout << "the area of the circle inscribed in the square is : " << area << endl;
}



int main ()
{
    reads();
    printarea(areacalculator());


return 0 ;















}