#include <iostream>

using namespace std;

int main()
{
    short int mounth;
    cout << "Select the mounth: \n";
    cin >> mounth;

    switch(mounth)
    {
        case 4:
        case 6:
        case 9:
        case 11: cout<< "There are 30 days.\n"; break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: cout<<"There are 31 days. \n"; break;
        case 2: cout <<"There are 28 or 29 days. \n"; break;
        default: cout <<"There is no such number\n";
    }
    return 0;
}