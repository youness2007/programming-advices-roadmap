#include <iostream>
using namespace std ;
int main ()
{
    int number, counter;
    int factorial = 1;
    cout << "please enter a number : ";
    cin >> number;
    while (number <= 0)
    {
        cout << "please enter a positive number.\n";
        cout << "please enter a number : ";
        cin >> number;
    }
    counter = number;
    while (counter >= 1)
    {
        factorial = factorial * counter;
        counter--;
    }

    cout << "your " << number << "! = " << factorial << " ." ;
    return 0;
}