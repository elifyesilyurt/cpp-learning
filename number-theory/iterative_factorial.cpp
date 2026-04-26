#include <iostream>

using namespace std;

int main()
{
    int number, i, result = 1;

    cout << "Enter a positive number: ";
    cin >> number;

    for(i = 1; i <= number; i++)
    {
        result *= i;
    }
    cout << number << "!=" << result << endl;
    return 0;
}