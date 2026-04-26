#include <iostream>

using namespace std;

int main()
{
    char myOperator;
    float x, y;

    cout<<"Choose a operator (+, -, *, /):";
    cin >>myOperator;
    cout<<"Enter two number:\n";
    cin >> x;
    cin >> y;

    float result;
    switch (myOperator)
    { 
        case '+':
        { 
            result = x + y;
            cout << "Result: \n"<<result;
            break;
        }

        case '-':
        {
            result = x - y;
            cout<<"Result: \n"<<result;
            break;
        }

        case '*':
        {
            result = x * y;
            cout<<"Result: \n"<<result;
            break;
        }
                case '/':
        {
            result = x / y;
            cout<<"Result: \n"<<result;
            break;
        }
        default:
        {
            cout <<"Invalid operator!" << endl;
            break;
        }
    }
    return 0;
}