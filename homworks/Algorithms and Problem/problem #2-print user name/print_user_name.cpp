#include <iostream>
using namespace std ;
#include <string>
string readname()
{
string Name ;
cout << "\nplease enter your full name : \n" ;
getline(cin,Name);
return Name ;


}
void printname(string Name)
{

cout << "\nyour name is "<< Name <<" .";

}
int main ()
{

printname(readname());
return 0 ;


}