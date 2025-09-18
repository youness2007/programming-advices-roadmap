#include <iostream>
using namespace std ;
int main ()
{
    int num1 , num2 ;
cout <<"please enter num1 ";
cin >> num1 ;
cout <<"please enter num2 ";
cin >> num2 ;
cout <<"please choose your operator (1-ADD, 2-SUBTRACT, 3-MULTIPLY, 4-DIVIDE): ";
int op ;
cin >> op ;

switch (op)
{

case 1 :
{
cout << num1 <<"+" << num2 << "=" << num1 + num2 << endl ;
break ;

}
case 2 :
{
cout <<num1 << "-"<<num2 << "=" << num1 - num2 << endl ;
break ;

}
case 3 : {
    cout << num1 <<"*" << num2 << "=" << num1 * num2 << endl ;
    break ;

}
case 4 :
{

cout << num1 << "/" << num2 << "=" << num1 / num2 << endl ;
break ;

}

default :
{

cout <<"your enterede the wrong operator " ;

}



}

return 0 ;
}


