#include <iostream>
using namespace std ;
struct idt 
{

string Name ;
string age ;
char gender ;
char marital ;
string monthly ;
int phone_number ;


};

struct adr
{
string country ;
string city ;
string street ;
};
int main ()
{
    idt identite;
    adr adress ;
    cout <<" please entre your name : \n\a" ;
    cin >> identite.Name ;
    cout <<"please enter your age : \n" ;
    cin >> identite.age ;
    cout <<"please enter your country : \n" ;
    cin >> adress.country ;
    cout << "please enter your city :\n" ;
    cin >> adress.city ;
    cout << "please enter your street adress :\n";
    cin >> adress.street ;
   cout << "please enter your gender (m/f):\n";
   cin >> identite.gender;
   cout <<"please enter your Marital status (1/0) :\n";
   cin >> identite.marital;
   cout << "please enter your monthly salary :\n";
   cin >> identite.monthly;
   cout << "please enter your phone number :\n";
   cin >> identite.phone_number;

   
  cout <<"***************************************************************************" << endl;
   cout << "Name: " << identite.Name << endl;
   cout << "Age: " << identite.age << endl;
   cout << "Gender: " << identite.gender << endl;
   cout << "Marital Status: " << identite.marital << endl;
   cout << "Monthly Salary: " << identite.monthly << endl;
   cout << "Phone Number: " << identite.phone_number << endl;
   cout << "Country: " << adress.country << endl;
   cout << "City: " << adress.city << endl;
   cout << "Street Address: " << adress.street << endl;
   cout << "***************************************************************************" << endl;



    return 0 ;
}