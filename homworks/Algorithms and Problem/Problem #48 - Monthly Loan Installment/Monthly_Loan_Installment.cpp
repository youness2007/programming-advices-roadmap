#include <iostream>
using namespace std  ;
int main ()
{
int loan_amount, total_months ;
cout << "please enter the loan amount :";
cin >> loan_amount ;
cout << "please enter the total number of months to pay the loan :";
cin >> total_months ;
int monthly_payment = loan_amount / total_months ;
cout << "the monthly payment is : " << monthly_payment << endl ;

return 0;







}