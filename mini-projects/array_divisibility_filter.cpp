#include <iostream>

using namespace std;

int main()
{
    int B[10] ={14, 3, 27, 40, 5, 18, 11, 6, 29, 8};

    int div3[10] = {}, notDiv[10] = {};
    int i, c3 = 0, nc3 = 0, j;

    for(i = 0; i < 10; i++)
    {
        if(B[i] % 3 == 0)
        {
            div3[c3] = B[i];
            c3++;
        }
        else
        {
            notDiv[nc3] = B[i];
            nc3++;
        }
    }
    cout << "Divisible by 3: ";
    for(j = 0; j < c3; j++)
    {
        cout << div3[j]<< " ";
    }
    cout << "\n";
    cout << "Not Divisible by 3: ";
        for(j = 0; j < nc3; j++)
    {
        cout << notDiv[j]<< " ";
    }
    return 0;
}