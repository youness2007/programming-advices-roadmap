#include <iostream>
using namespace std ;
struct strinfo 
{
short int age ;
bool has_a_driver_lisence ;


};
strinfo readinfo (strinfo info)
{
cout << "\nplease enter your age :\n";
cin >> info.age ;
cout <<"\ndo you have a driver lisence 0 for no and 1 for yes .\n";
cin >> info.has_a_driver_lisence ;


return info ;
}

bool isaccepted (strinfo info)
{

    return (info.age > 21 && info.has_a_driver_lisence);
}

void printinfo(strinfo info)
{
if (isaccepted(info))
{
    cout <<"\nHIRED\n";
}
else{cout <<"\nREJECTED\n"; }

}



int main ()
{
strinfo info ;
printinfo(readinfo(info)) ;
return 0 ;
}