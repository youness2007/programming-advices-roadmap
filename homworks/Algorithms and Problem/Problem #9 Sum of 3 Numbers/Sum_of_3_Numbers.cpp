#include<iostream>
using namespace std ;
void readnumbers(int &num1 , int &num2 , int &num3)
{
cout <<"please enter number 1 :";
cin>>num1 ;
cout<<"please enter number 2 :";
cin >> num2 ;
cout <<"please enter number 3 :";
cin >> num3 ;



}
int calculatesumof3numbers(int num1 , int num2 , int num3 )
   {


return num1 + num2 + num3 ;

   }
void printsumofnumbers(int total)
{

   cout <<"the total of numbers is: "<< total;

}
int main ()
{
int num1 , num2 ,num3 ;
readnumbers(num1 , num2 , num3) ;
printsumofnumbers(calculatesumof3numbers(num1 , num2 , num3));


}