#include <iostream>
using namespace std;

struct strinfo 
{
	
string firstname ;
string lastname;
int age ;

string  phone;

};

void readinfo(strinfo &info)
{
	
cout <<"please enter first name   :";
cin >> info.firstname ;
cout <<"please enter last name    :";
cin >> info.lastname;
cout <<"please enter age          :";
cin >> info.age;
cout <<"please enter phone number :";
cin >> info.phone;

}

void printinfo(strinfo &info)
{
cout <<"first name    : "<< info.firstname << endl;
cout <<"last name     : "<< info.lastname << endl;
cout <<"age           : "<< info.age << endl;
cout <<"phone number  : "<< info.phone << endl;

}

void readpersonsinfo(strinfo person[100],int &persons)
{
	 
	cout <<"how many persons :";
cin >> persons;
for (int i = 0 ; i<=persons - 1 ;i++ )
{
cout << "please enter person ["<<i+1<<"] info:\n\n";
readinfo(person[i]);

}


    

}
void printpersonsinfo (strinfo person[100],int &persons)
	{
for (int i=0 ; i<=persons -1 ; i++)
{
cout <<"PERSON ["<< i+1 <<"] info :\n\n" ;
printinfo(person[i]);
cout<<endl ;
}


	}


int main ()
{


strinfo person[100];
int persons;
   cout <<"*****************************" << endl;
   readpersonsinfo(person,persons);

   cout <<"*****************************" << endl;
   
   printpersonsinfo(person,persons);
   
   cout <<"*****************************" << endl;
   
 
}