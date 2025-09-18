#include<iostream>
using namespace std ;

enum enpassfail{pass=1,fail=2};
float readusermark()
{
int Mark ;
cout <<"please enter your mark : " ;
cin >> Mark ;
return Mark ;

}

enpassfail chekmark(float Mark)
{


if (Mark >=50)
return enpassfail::pass ;
else 
return enpassfail::fail ;


}
void printmark(int Mark)
{
if(chekmark(Mark)==enpassfail::pass)
cout <<" you passed.\n ";
else
cout <<"you fail.\n"; 



}
int main ()
{
printmark(readusermark()) ;

return 0 ;
}