#include <iostream>

using namespace std;

int main()
{
    int age[10], sum = 0, youngest = 0;
    float average = 0.0;

    int i;
    for(i = 0; i < 9; i++)
    {
        cout <<"Enter ages:";
        cin >> age[i];
        sum += age[i];
    }

    for(i = 0; i < 9; i++)
    {
        cout << "Student "<< i + 1 <<" age:" << age[i]<< "\n";
    }

    average = sum / 9.0;
    cout << "Average Age: " << average << "\n";

    youngest = age[0];
    i = 1;

    for(i = 1; i < 9; i++)
    {
        if(age[i] < youngest)
        {
            youngest = age[i];
        }
    }
    cout << "Youngest Age: "<< youngest;
    return 0;
}s