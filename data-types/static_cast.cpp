#include <iostream>

using namespace std;

int main()
{
    float myNumber = 9.56;
    myNumber = static_cast <int> (9.56);
    cout <<myNumber<< "\n";
    return 0;
}