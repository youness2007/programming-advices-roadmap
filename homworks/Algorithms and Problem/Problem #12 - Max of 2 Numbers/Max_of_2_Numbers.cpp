#include <iostream>
using namespace std ;

void readnumber(int &num1 , int &num2)
{
cout <<"please enter your first number :";
cin >> num1 ;
cout << "please enter your second number :";
cin >> num2 ;

}


int numcomparator(int num1 , int num2)
{
if (num1>num2)
return num1;
else 
return num2 ;

}
void printnumber(int maxnumber)
{

cout << "the max number is :"<<maxnumber ;

}

int main ()
{
    int num1 ,num2;
readnumber( num1 ,num2);
printnumber(numcomparator(num1 ,num2));
return 0 ;
}