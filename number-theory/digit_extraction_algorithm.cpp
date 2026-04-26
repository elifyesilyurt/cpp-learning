#include <iostream>

using namespace std;

int main()
{
    int number[10],num = 0, i, j;  
    cout<< "Choose an integer between 1 and 10 digits: ";
    cin >> num;
    i = 0;

    while( num > 0)
    {
       number[i] = num % 10;
       num /= 10;
       i++;
    }
    
    for(i; i < 0;i --)
    {
        cout << 
    }

}