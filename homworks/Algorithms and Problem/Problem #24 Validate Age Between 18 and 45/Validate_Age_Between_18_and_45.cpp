#include <iostream>
using namespace std ;

int readuserage(int &age)
{
    cout << "please enter your age :";
    cin >> age;
    return age ;
}
bool agevalodator(int age,int from ,int to )
{
return (age>=from && age <=to) ;
}
void printage(int age)
{
  if (agevalodator(age,18,45))
  cout<<"is a valid age ";
  else 
  cout << "is a invalid age ";
}
int main ()
{
  int age ;
 
 printage(readuserage(age));

  return 0 ;
}