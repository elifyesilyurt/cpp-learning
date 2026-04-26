#include <iostream>

using namespace std;

int main()
{
    int number1, number2, sum, sub, multi;
    float div;
    
    cout<<"Choose a first number: ";
    cin>> number1;
    cout<<"Choose a second number: ";
    cin>> number2;

    sum = number1 + number2;
    sub = number1 - number2;
    multi = number1 * number2;
    div = number1 / number2;

    cout<<"number1 + number2 =" <<sum<<".\n";
    cout<<"number1 - number2 =" <<sub<<".\n";
    cout<<"number1 * number2 =" <<multi<<".\n";
    cout<<"number1 / number2 =" <<div<<".\n";    

    return 0;
}