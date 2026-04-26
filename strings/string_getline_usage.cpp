#include <iostream>

using namespace std;

int main()
{
    string text;
    cout << "Enter a message:";
    getline(cin,text);
    cout << "\nyour message is \"" <<text <<"\".\n";
    return 0;
}