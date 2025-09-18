#include<iostream>
using namespace std ;
void readMarks(int &Mark1 , int &Mark2 , int &Mark3)
{
cout <<"please enter Mark 1  :";
cin>>Mark1 ;
cout<<"please enter Mark  2  :";
cin >> Mark2 ;
cout <<"please enter Mark 3  :";
cin >> Mark3 ;



}

float calculatMarkaverage(float Mark1 , float Mark2 , float Mark3 )
   {


return float((Mark1 + Mark2 + Mark3)/3) ;

   }
void printaverage(float average)
{

   cout <<"the Average is: "<< average;

}
int main ()
{
int Mark1 , Mark2 ,Mark3 ;
readMarks(Mark1 , Mark2 , Mark3) ;
printaverage(calculatMarkaverage(Mark1 , Mark2 , Mark3));

return 0 ;
}