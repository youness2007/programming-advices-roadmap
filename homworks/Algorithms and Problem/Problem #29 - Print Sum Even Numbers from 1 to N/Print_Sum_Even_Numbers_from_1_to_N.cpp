#include <iostream>
using namespace std;

int main() 
{
    int N;
    cout << "Enter N: ";
    cin >> N;

    int sum = 0;
    for (int i = 2; i <= N; i = i + 2) 
    {
      if (i%2==0)
      {
        sum = sum + i;
      }
    }

    cout << "Sum of even numbers from 1 to " << N << " is: " << sum << endl;
    return 0;
}