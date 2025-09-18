#include <iostream>
using namespace std ;
struct strinfo 
{
short int age ;
bool has_a_driver_lisence ;
bool has_a_recomendation ;

};
strinfo readinfo (strinfo info)
{
cout << "\nplease enter your age :\n";
cin >> info.age ;
cout <<"\ndo you have a driver lisence 0 for no and 1 for yes .\n";
cin >> info.has_a_driver_lisence ;
cout <<"\ndo you have a recomendatio 0 for no 1 for yes\n";
cin>>info.has_a_recomendation ;


return info ;
}                                                              

bool isaccepted (strinfo info)
{

    return (info.age > 21 && info.has_a_driver_lisence || info.has_a_recomendation);
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