#include <iostream>
using namespace std;

int main()
{
   short int number;
   cout << "Enter a number (1 - 10): ";
   cin >> number;

    if (number < 1 || number > 10)
    {
        cout << "Invalid input! Please enter a number between 1 and 10." << endl;
        return 1; 
    }
    else
    {
        cout << "Multiplication Table for " << number << ":" << endl;
        for (int i = 1; i <= 10; ++i)
        {
            cout << number << " x " << i << " = " << number * i << endl;
        }
    }
    return 0;
}