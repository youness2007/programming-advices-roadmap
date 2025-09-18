#include <iostream>
using namespace std ;

struct strinfo
{

string firstname;
string lastnamel;

};

strinfo read_user_name(strinfo info)
{
cout <<"please enter your first name :\n";
cin >> info.firstname ;
cout << "please enter your last name :\n";
cin>>info.lastnamel ;

return info ;
}

string getfullname(strinfo info)
{
string fullname ;
fullname = info.firstname+" "+info.lastnamel ;
return fullname ;
}

void printfullname(string fullname)
{
cout <<"your full name is : ";
cout << fullname <<endl ;



}

int main ()
{
	strinfo info;
	printfullname(getfullname(read_user_name(info)));

    return 0 ;
}