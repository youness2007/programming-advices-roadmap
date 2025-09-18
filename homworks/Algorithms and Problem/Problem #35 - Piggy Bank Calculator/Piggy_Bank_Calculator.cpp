#include <iostream>
using namespace std ;
int main ()
{ 
    float pennies , nickels , dimes , quarters , dollars ;
    cout << "please enter the number of pennies : ";
    cin >> pennies ;
    cout << "please enter the numbber of nichels : " ;
    cin >> nickels ;
    cout << "please enter the number of dimes : " ;
    cin >> dimes ;
    cout << "please enter the number of quarters : " ;
    cin >> quarters ;
    cout << "please enter the number of dollars : " ;
    cin >> dollars ;

    float total_pennies = pennies * 1 + nickels * 5 + dimes * 10 + quarters * 25 + dollars * 100 ;
    float total_dollars = total_pennies /100 ;
    cout << "the total of your pennies is :" << total_pennies << " pennies\n" ;
    cout << "the total of your dollars is :" << total_dollars <<"  dollars \t\n\a" ;
    return 0;












}