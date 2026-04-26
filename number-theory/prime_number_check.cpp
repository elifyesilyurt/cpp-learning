#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int number;

    cout << " Enter a number: ";
    cin >> number;

    if( number < 2)
        cout<< "Please enter a number greater then one. \n";
        
    int i, control = 1;
    int result = sqrt(number);

    for(i = 2; i <= result; i++)
    {
        if (number % i == 0)
        {
            control = 2;
            break;
        }
    }
    if(control == 2)
        cout << number << " is not a prime number.\n";
    else
        cout << number << " is a prime number.\n";
       
   return 0;
}