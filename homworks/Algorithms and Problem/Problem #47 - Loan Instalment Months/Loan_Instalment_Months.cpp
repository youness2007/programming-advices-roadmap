#include <iostream>
using namespace std ;
int main ()
{
    int loan_amount , Monthly_payment ;
    cout << "please enter the loan amount :" ;
    cin >> loan_amount ;
    cout << "please enter the monthly payement : ";
    cin >> Monthly_payment ;
    int total_months = loan_amount / Monthly_payment ;
    cout <<"the total number of months to pay the loan is : " << total_months << " months" << endl ;
    return 0 ;














}