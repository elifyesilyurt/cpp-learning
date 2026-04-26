#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int number, result;

    cout << "Enter a positive number: " << endl;
    cin >> number;

    if (number < 0)
    cout << "Please enter a positive number!" << endl;
    else
    {
       result = sqrt(number);
       result *= result;

       if (number == result)
           cout << number << " is a perfect square." << endl;
       else
           cout << number << " isn't a perfect square." << endl;
    }

    return 0;
}