#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    double z;

    cout << "Enter two integer: \n";
    cin >> x;
    cin >> y;
    cout << "Enter a double: \n";
    cin >> z;
    cout << "Sum: " << x + y << endl;
    cout << "Difference: " << x - y << endl;
    cout << "Product: "<< x * y << endl;
    cout << "Remainder: " << x % y << endl;
    cout << "Int division: " << x / y << endl;
    cout << "Float division:" << double(x / y) << endl;
    cout << "Double x 3: "<< x * 3 << endl;

    return 0;
}