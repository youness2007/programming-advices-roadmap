#include <iostream>
using namespace std;
int main ()
{
    int A, B;
    cout << "Please enter your first number A: ";
    cin >> A;
    cout << "Please enter your second number B: ";
    cin >> B;
    cout << "A == B is: " << (A == B) << endl;
    cout << "A != B is: " << (A != B) << endl;
    cout << "A >  B is: " << (A > B) << endl;
    cout << "A <  B is: " << (A < B) << endl;
    cout << "A >= B is: " << (A >= B) << endl;
    cout << "A <= B is: " << (A <= B) << endl;
    return 0;
}