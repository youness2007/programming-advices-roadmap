#include <iostream>
using namespace std ;
#include <cmath>

float taskduration(float days , float hours , float minutes , float seconds)
{


return (seconds + (minutes * 60) + (hours * 3600) + (days * 3600*24)) ;


}


int main ()
{
 
float days , hours , minutes , seconds ;
cout << "please enter the number of days : " ;
cin >> days ;
cout << "please enter the number of hours : " ;
cin >> hours ;
cout << "please enter the number of minutes : " ;
cin >> minutes ;
cout << "please enter the number of seconds : " ;
cin >> seconds ;

cout << "the total duration in seconds is : " << round(taskduration(days, hours, minutes, seconds)) << " seconds" << endl ;

return 0 ;















}
