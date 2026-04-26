#include <iostream>

using namespace std;

int main()
{
    int value = 7;
    cout << "Value: "<< value;
    value = 12;
    cout << "\nValue squared: "<< value * value;
    value += 3;
    cout << "\nvalue + 3: "<< value;
    value++;
    cout << "\nNew value: "<< value;

    return 0;
}