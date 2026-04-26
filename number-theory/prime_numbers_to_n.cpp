#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int number, i, j, control = 1;

    cout << "Please enter a number: ";
    cin >> number;

    for(i =2; i <= number; i++)
    {
        control = 1;
        for (j = 2; j <= sqrt(i); j++)
        {
            int result = i % j;
            if(result == 0)
            {
                control = 2;
                break;
            }
        }
        if (control == 1)
            cout << i << " ";
    }
    return 0;
}
