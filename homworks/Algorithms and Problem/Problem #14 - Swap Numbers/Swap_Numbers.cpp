#include<iostream>
using namespace std ;

void readnumbers(int &number1 , int &number2)
{
cout << "please enter number1 :";
cin >> number1 ;
cout <<"please enter number2  :";
cin >> number2 ;
}
void numberswaper(int &number1,int &number2)
{
int temp ;
temp = number1;
number1 = number2;
number2 = temp ;

}

void printnumber(int number1,int number2)
{
cout <<number1<<endl ;
cout <<number2<<endl ;
}

int main ()
{
    int number1, number2;
readnumbers(number1, number2);
numberswaper(number1,number2);
printnumber(number1,number2);



return 0;
}