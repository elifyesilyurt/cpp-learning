#include <iostream>

using namespace std;

int main()
{
    const float PI = 3.1415;
    float r, area, circumference;

    cout << "Enter a radius:";
    cin >> r;

    area = PI * r * r;
    circumference = 2 * PI * r;

    cout << "The area is: " << area << "\n";
    cout << "The circumference is: " << circumference;

    return 0;
}