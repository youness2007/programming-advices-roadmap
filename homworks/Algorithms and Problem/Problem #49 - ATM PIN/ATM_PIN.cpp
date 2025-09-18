#include<iostream>
using namespace std ;

void readuserpassword(int &password)
{
    cout << "Enter your ATM PIN: ";
    cin >> password;
}

int main()
{
    int password;
    readuserpassword(password);
    if (password == 1234)

{
cout <<"your balance is 7500" << endl;

}
else
{
    cout << "Invalid PIN. Please try again." << endl;
}

    return 0;
}