#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Choose a number: \n";
    cin >> number;

    if (number < 0)
    {
        cout<<"Please enter a positive number:\n";
        cin >> number;
    }
    if (number % 2 == 0)
        cout << number << " is even number.\n";
    else
        cout <<number<< " is odd number.\n";
    
    return 0;
}