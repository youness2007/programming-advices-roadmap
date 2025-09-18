#include <iostream>
using namespace std ;


int readage (int &age )
{
cout <<"please enter you age :\n";
cin >> age ;
return age ; 
}

bool validateNumberInRange(int age , int from , int to)
{

return (age >= from && age <= to);

}
int agevalidatore(int &age , int from , int to)
{
    int temp =0 ;

    do
    {
    temp=readage(age);
    }
    while (!validateNumberInRange(age ,18,45));
return age ;
}



void printage(int age )
{

cout <<"your age is : "<< age <<" \n is a valid age .";

}
int main ()
{
int age ;
readage(age);
printage(agevalidatore(age,18,45));
return 0 ;
}