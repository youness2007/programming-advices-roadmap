#include <iostream>
using namespace std ;




struct strinfo 
{
string fullName ;
int age ;
string phoneNumber ;
string country ;
string city ;
int monthlySalary ;
char gender ;
bool maritalStatus ;
};





void readinfo(strinfo &info)

{

cout <<"\n\n\nplease enter your full name    :" ;
getline (cin , info.fullName) ;

cout <<"please enter your age          :" ;
cin >> info.age ;


cout <<"please enter your phone number :" ;

cin >> info.phoneNumber;
cin.ignore(1, '\n');
cout <<"please enter your country               :" ;
cin >> info.country ;
cout <<"please enter your city                  :" ;
cin >> info.city;
cout <<"please enter your monthly salary        :" ;
cin >> info.monthlySalary ;
cout <<"please enter your gender (m/f)          :" ;
cin >> info.gender;
cout <<"please enter your marital status (1/0)  :" ;
cin >> info.maritalStatus;

}

void printinfo (strinfo info)
{
    cout <<"\n\n\n";
    cout <<"*****************************************\n";
    cout << "Full Name      : " << info.fullName << endl;
    cout << "Age            : " << info.age << endl;
    cout << "Phone Number   : " << info.phoneNumber << endl;
    cout << "Country        : " << info.country << endl;
    cout << "City           : " << info.city << endl;
    cout << "Monthly Salary : " << info.monthlySalary << endl;
    cout << "Yearly Salary  : " << (info.monthlySalary * 12) << endl;
    cout << "Gender         : " << info.gender << endl;
    cout << "Marital Status : " << info.maritalStatus << endl;
    cout <<"*****************************************\n\n\n\n";
}


int main()
{
    strinfo person1 ;
        readinfo(person1);
        printinfo(person1);
        return 0;
}




