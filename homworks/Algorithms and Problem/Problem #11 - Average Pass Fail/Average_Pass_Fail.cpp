#include<iostream>
using namespace std ;
enum enpassfail{pass=1,fail=2};
void readmarks (int &Mark1,int &Mark2 , int &Mark3 )
{
   cout <<"please enter your first Mark1   :";
   cin >> Mark1 ;
   cout <<"please enter your second Mark2  :";
   cin >> Mark2 ;
   cout <<"please enter your second Mark3  :";
   cin >>Mark3 ;

}
float calculate_average(int &Mark1,int &Mark2 , int &Mark3)
   {

      return float((Mark1+Mark2 +Mark3)/3) ;
}

float checkaverage(float average)

{
if (average>=50)
{
   return enpassfail::pass ;
}
else 
{
  return enpassfail::fail ;
}



}
void printaverage(float average)
{

cout <<"your average is : "<< average << endl ;
if (checkaverage(average)==enpassfail::pass)
    cout <<"you passed.";
else 
    cout <<"you fail";
}
int main ()
{
int Mark1,Mark2 , Mark3 ;
readmarks(Mark1,Mark2,Mark3);
printaverage(calculate_average(Mark1,Mark2 , Mark3));

return 0;
}












































/*#include <iostream>
using namespace std ;


void readmarks (float marks[3])
{
    
cout <<"please enter mark 1 :";
cin >> marks[0];
cout <<"please enter mark 2 :";
cin >> marks[1];
cout <<"please enter mark 3 :";
cin >> marks[2];


}
float calculataverage (float marks[3])
{

return (marks[0] + marks[1] + marks[2]) / 3 ;



}
void printaverage (float marks[3])
{

 cout << "the average is :" << calculataverage(marks) << endl;

 if (calculataverage(marks) >= 50)
 {

cout <<"PASS" << endl;

 }
 else 
 {

    cout <<"FAIL" << endl;

 }

}



int main ()
{
float marks[3];
readmarks(marks);
calculataverage(marks);
printaverage(marks);
return 0 ;
}*/