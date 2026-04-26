#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Turkish");

    cout << "Artık türkçe karakter kullanabiliyorum." <<endl;
    return 0;
}   