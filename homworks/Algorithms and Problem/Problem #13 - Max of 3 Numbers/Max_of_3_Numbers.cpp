#include <iostream>
using namespace std ;

void readnumber(int &num1 , int &num2, int &num3)
{
cout <<"please enter your first number   :";
cin >> num1 ;
cout << "please enter your second number :";
cin >> num2 ; 
cout << "please enter your third number  :";
cin >> num3 ;

}


int numcomparator(int num1 , int num2,int num3)
{
if (num1>num2&&num1>num3)
return num1;
else if(num2>num3&&num2>num1) 
return num2 ;
else if(num3>num1&&num3>num2)
return num3 ;
}
void printnumber(int maxnumber)
{

cout << "the max number is :"<<maxnumber ;

}

int main ()
{
    int num1 ,num2,num3;
readnumber( num1 ,num2,num3);
printnumber(numcomparator(num1 ,num2,num3));
return 0 ;
}
