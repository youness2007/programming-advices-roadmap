#include <iostream>
#include <string>
using namespace std;
int main ()
{

string string1 , string2 , string3 ;

cout << "please enter you first string :"<<"\n";
getline(cin, string1);

cout <<"please enter your second string :" << "\n";
getline(cin, string2);

cout <<"please enter your third string :" << "\n";
getline(cin, string3) ;

cout <<"*************************************************************"<<endl ;

cout << "the length of the first string is :" <<string1.length() <<endl;
cout << "character at 0,4,7 is :" << string1[0] <<" "<< string1[4] << " " << string1[7] << endl ;
cout << "comcatenation of string2 and string3 is :"<< string2 + string3 << endl ;

int sum = stoi(string2) * stoi(string3) ;
cout << string2 << "*"<< string3 << "="<< sum << endl ;
return 0 ;





}