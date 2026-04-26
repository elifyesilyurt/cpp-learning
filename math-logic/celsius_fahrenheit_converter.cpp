#include <iostream>

using namespace std;

int main()
{
    string city;
    double temperature;
    char unit;
    int hour;
    double converted;

    cout << "City: \n";
    cin >> city;
    cout << "Temperature: \n";
    cin >> temperature;
    cout << "Unit (C/F): \n";
    cin >> unit;
    cout <<"Hour: \n";
    cin >> hour;

    if (unit == 'C' || unit == 'c')
    {
        converted = (temperature * 9 / 5) + 32; 
        cout << "Converted Temperature: " << converted << endl;
    }
    else
    {
        converted = (temperature - 32) * 5 / 9;
        cout << "Converted Temperature: "<< converted << endl; 
    }
    
    return 0;
}