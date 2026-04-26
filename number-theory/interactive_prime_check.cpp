#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int number, i, control = 1, result;;

    do
    {
        cout << " Enter a number: ";
        cin >> number;

        if( number < 1)
        {
            cout<< "Please enter a number greater then one. \n";
            continue;
        }        
            
        if(number == 1) 
            break;

        result = sqrt(number);

        for(i = 2; i <= result; i++)
        {
            if (number % i == 0)
            {
                control = 2;
                break;
            }
            else
                control = 1;
    
        }
        if(control == 2)
            cout << number << " is not a prime number.\n";
        else
            cout << number << " is a prime number.\n";
    }
    while (number != 1);

    return 0;
}