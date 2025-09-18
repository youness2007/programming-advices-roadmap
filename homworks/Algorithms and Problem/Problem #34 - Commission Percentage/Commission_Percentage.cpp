#include <iostream>
using namespace std ;
void totalsalesreader(long int &totalsales)
{
cout <<"please enter the total sales amount ";
cin >> totalsales;
}

int main ()
{
long int totalsales ;
totalsalesreader(totalsales);

cout <<"the total of your sales is :" << totalsales << endl ;

//cout << "There are 6 zeros in 1 million." << endl;
if (totalsales >= 1000000)
{
    cout << "cashback percentage is: 1%" << endl;
    cout << "cashback amount is: " << (totalsales * 0.01) << endl;
}

else if(totalsales >= 500000 && totalsales < 1000000)
{
    cout << "cashback percentage is: 2%" << endl;
    cout << "cashback amount is: " << (totalsales * 0.02) << endl;

}

else if(totalsales >= 100000 && totalsales < 500000)
{

    cout << "cashback percentage is: 3%" << endl;
    cout << "cashback amount is: " << (totalsales * 0.03) << endl;
}

else if (totalsales >= 50000 && totalsales < 100000)
{

cout << "cashback percentage is: 5%" << endl;
cout << "cashback amount is: " << (totalsales * 0.05) << endl;

}

else
{
    
cout << "cashback percentage is: 0%" << endl;
cout << "cashback amount is: " << (totalsales * 0) << endl;

}












return 0;
}











