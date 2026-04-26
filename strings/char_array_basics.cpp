#include <iostream>

using namespace std;

int main()
{
    char mytxt[100];
    cout<< "Enter your message:\n";
    cin.getline(mytxt, sizeof(mytxt));
    cout<<"\n Your message is \""<<mytxt<<"\"\n";
    
    return 0;
}