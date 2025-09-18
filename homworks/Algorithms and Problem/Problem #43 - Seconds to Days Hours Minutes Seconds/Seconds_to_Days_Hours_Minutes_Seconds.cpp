#include <iostream>
using namespace std ;
#include <cmath>


void secondstotime()
{

int secondsperday = 24 * 3600;
   int secondsperhour = 3600 ;
   int secondsperminute = 60 ;

   int total_seconds ;
   cout <<"please enter the total number of seconds :";
   cin >> total_seconds ;
   int days = total_seconds / secondsperday;
   int remainder = total_seconds % secondsperday ;
   int hours = remainder / secondsperhour ;
   remainder = remainder % secondsperhour ;
   int minutes = remainder / secondsperminute ;
   remainder = remainder % secondsperminute ;
   int seconds = remainder ;

   cout << days <<":"<< hours <<":"<< minutes << ":"<< seconds << endl;

}


int main ()
{
   secondstotime();
   return 0 ;
   









}