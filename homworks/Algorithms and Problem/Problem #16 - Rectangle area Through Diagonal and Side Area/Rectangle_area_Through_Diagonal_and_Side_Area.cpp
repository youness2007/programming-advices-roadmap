#include <iostream>
#include <cmath>
using namespace std ;
void read_side_diagonal(float side , float diagonal)
{
 cout << "please entre the side length of your rectangle :";
 cin >> side ;
 cout << "please entre the diagonale length of your rectangle :";
 cin >> diagonal ;
}
float areacalculator(float side , float diagonal)
{
    float area = (side *(sqrt(pow(diagonal,2)-pow(side,2))));
return float (area) ;
}
void printarea(float area)
{
cout << "the area of your rectangle is : "<<area<<endl ;
    
}





int main ()
{
    float area;
 float side ,  diagonal;
read_side_diagonal(side,diagonal);
areacalculator(side,diagonal);
printarea(area);

 return 0 ;






}