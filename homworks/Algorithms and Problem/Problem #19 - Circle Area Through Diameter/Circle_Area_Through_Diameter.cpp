#include <iostream>
using namespace std ;

float read_diameter()

{
    float diameter;
cout << "please enter the diameter of the circle " ;
cin >> diameter ;
return diameter ;

}
float areacalculator(    ) // Diameter of the cercle )

{
    float diameter ;
float π = 3.14 ;
float area = (π * diameter * diameter   ) /4  ;
    return area;
}
void print_area(float area)
{
cout << "the area of your circle is :" << area << endl ;

}



int main ()
{


read_diameter();
print_area(areacalculator());










return 0;













}








