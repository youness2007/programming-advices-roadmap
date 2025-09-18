#include <iostream>
using namespace std ;
int main ()

{
short int grade;

cout <<"please enter your grade : ";
cin >> grade;
cin.ignore(1 , '\n');

if (grade>=90 && grade<=100)
{

cout <<"A";

}
else if (grade<=89 && grade>=80)
{
    cout <<"B";
}
else if (grade<=79 && grade>=70)
{
    cout <<"C";
}
else if (grade<=69 && grade>=60)
{
    cout <<"D";
}
else if (grade<=59 && grade>=50)
{
    cout <<"E";
}
else if (grade<50)
{
    cout <<"F";
}
else 
{
    cout <<"invalid grade";
}

return 0;
}