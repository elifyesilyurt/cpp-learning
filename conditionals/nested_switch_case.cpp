#include <iostream>

using namespace std;

int main()
{
    int x=7, y=12, result;

    switch(x)
    {
    case 7:
        result = 19;
        break;
    
    default:
        switch (y)
        {
        case 12:
            result = 10;
            break;
        
        default:
            result = -7;
        }
    }
    cout <<result<<"\n";
    
    return 0;
}