#include <iostream>

using namespace std;

int main()
{
    short int number, result, ab, cd;

    cout<<"Enter a positive four digit number:";
    cin >> number;

    if (number < 1000 || number > 9999) 
    {
    cout << "Please enter a 4-digit number!" << endl;
    return 1;
    }
    // 4 basamaklı bir sayıyı 100' e bölersek bölüm ilk iki basamağı, kalan son iki basamağı verir.
    else
    {
        ab = number / 100;
        cd = number % 100;

        result = (ab + cd) * (ab + cd);

        if (number == result)
            cout << number << " is a special number" << endl;
        else 
            cout << number << " isn't a special number" << endl;
    }        
    return 0;
}