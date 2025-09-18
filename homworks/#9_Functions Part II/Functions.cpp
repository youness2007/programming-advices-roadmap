#include <iostream>
using namespace std ;

void mysumprocedure()

{

 int num1 , num2 ;   
cout <<"please enter number 1 :\n";
cin >> num1 ;
cout << "please enter number 2 :\n";
cin >> num2 ;
int sum = num1 + num2 ;
cout <<"****************************\n";
cout << sum ;



}
int mysumfunction ()
{
int Num1 , Num2 ;
cout << "please enter number 1 :\n";
cin >> Num1 ;
cout << "please enter number 2 :\n";
cin >> Num2 ;

cout <<"****************************\n";
return Num1 + Num2 ;

}





int main  ()
{
    //mysumprocedure();
    cout << mysumfunction() << endl ;
    return 0;
}   