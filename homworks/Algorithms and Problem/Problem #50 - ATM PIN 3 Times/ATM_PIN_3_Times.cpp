#include <iostream>
using namespace std ;
int main()
{
int password ;
int counter = 1 ;
cout <<"please enter the password \n";
cin >> password ;
if (password == 1234)
{
cout << "your amount is 7500 .";
}
else if (password !=1234)
{
 while (counter<3)  
 { 
cout <<"please enter a valide  password \n";
cin >> password ;
if (password==1234)
{
cout <<"your amount is 7500 .";

return 0 ;
}
counter++ ;


 }
cout <<"your card is locked .";
}


return 0 ;
}