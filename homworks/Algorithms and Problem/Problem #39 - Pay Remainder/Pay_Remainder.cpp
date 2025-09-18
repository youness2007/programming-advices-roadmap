#include <iostream>
using namespace std ;
int main ()
{
    float total_bill , cash_paid  ;
    cout << "*********************************************" << endl ;
    cout << "please enter the total bill : " ;
    cin >> total_bill ; 
    cout << "please enter the cash paid : " ;
    cin >> cash_paid ;
    float change = cash_paid - total_bill ;
    cout << "the change is : "  << change << endl ;
    cout << "*********************************************" << endl ;
    return 0 ;
















}