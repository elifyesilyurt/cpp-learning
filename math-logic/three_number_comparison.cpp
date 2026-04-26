#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3, max, min;

    cout << "Choose a first number: \n";
    cin >> num1;

    cout << "Choose a second number: \n";
    cin >> num2;

    cout << "Choose a third number: \n";
    cin >> num3;

    if(num1 >= num2 && num1 >= num3)
    {
        max = num1;
        min = (num2 > num3)? num3 : num2;
    }
    else if(num2 >= num1 && num2 >= num3)
    {
        max = num2;
        min = (num1 > num3)? num3 : num1;
    }
    else
    {
        max = num3;
        min = (num2 > num1)? num1 : num2;
    }
    cout<<"Max: "<< max << "\n";
    cout<<"Min: "<< min << "\n";

    return 0;
}