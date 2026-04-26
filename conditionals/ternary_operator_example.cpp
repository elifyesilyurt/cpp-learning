#include <iostream>

using namespace std;

int main()
{
    int number;
    string result;
    cout<<"Choose a number: ";
    cin>> number;

    result = (number > 0)? "Your number is positive\n" : "Your number is negative\n "; // : değilse anlamında kullanılıyor.
    cout << result;

    return 0;
}