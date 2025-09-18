#include <iostream>
#include <cmath>
using namespace std ;

void read_B_and_A(float &A,float &B)
{
 //  B : base of the isosceles triangle
  //  A : height of the isosceles triangle
 float π =3.14 ;
 cout << "please enter the base of the isosceles triangle : ";
 cin >> A ;
 cout << "please enter the height of the isosceles triangle : ";
 cin >> B ;


}
float areacalculator(  float A ,float B )
{
   
    float π = 3.14;
    float area = (π * pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B));
    return area;
}
void printarea(float area)
{

cout << "the area of the circle inscribed in the isosceles triangle is : " <<area<<endl ;

}


int main () 
{ 
    float A , B ;
    read_B_and_A(A,B);
 printarea(areacalculator(A,B));


return 0 ;







}