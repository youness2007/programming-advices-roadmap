#include <iostream>
using namespace std ; 


void gradesreader(float grades[3])
{

cout <<"please enter grade1 :";
cin >> grades[0] ;
cout <<"please enter grade2 : " ;
cin >> grades[1];
cout << "please enter grade3 :";
cin >> grades[2];
cout <<"*************************\n";
}



float gradescalculator(float grades[3])
{
return (grades[0]+grades[1]+grades[2])/3 ;
}




int main  ()
{
float grades[3];

gradesreader(grades);

cout << "The average is: " << gradescalculator(grades) << endl;

return 0;
}

    
