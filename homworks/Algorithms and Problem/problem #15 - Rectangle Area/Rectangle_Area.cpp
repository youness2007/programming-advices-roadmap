#include <iostream>
using namespace std ;

void read_WIDTH_and_HEIGHT(float &width,float &height)
{
cout << " PLEASE ENTER THE WIDTH OF THE RECTANGLE: ";
cin >> width;
cout << "PLEASE ENTER THE HEIGHT OF THE RECTANGLE: ";
cin >> height ;
}
float areacalculator (float width, float height) {
   
    
    return float(width * height ) ;

}
void printarea(float area)
{
 
cout <<"THE AREA OF THE RECTANGLE Is : "<<area<<endl;
}






int main ()
{
float width,  height;
read_WIDTH_and_HEIGHT( width, height);

printarea(areacalculator(width, height));














 return 0;
}