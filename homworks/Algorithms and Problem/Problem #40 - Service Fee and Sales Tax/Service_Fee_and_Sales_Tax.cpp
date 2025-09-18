#include <iostream>
using namespace std ;
int main ()
{
    float bill_amount ;
    cout << "" << "*********************************************" << endl ;
    cout << "please enter the bill amount : ";
    cin >> bill_amount ;
     
   float total_bill = bill_amount * 1.1 ;// Adding 10% service fee
   total_bill = total_bill * 1.16; // Adding 16% sales tax;
   cout << "the total bill after adding service fee and sales tax is : " << total_bill << endl ;
   cout << "" << "*********************************************" << endl ;
   return 0 ;

















}
