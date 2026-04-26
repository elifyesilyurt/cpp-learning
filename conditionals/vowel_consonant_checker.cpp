#include <iostream>
#include <cctype> //isalpha() fonk kullanabilmek için gerekli.

using namespace std;

int main()
{
    char letter;
    cout << "Choose a letter: \n";
    cin >> letter;

    if (!isalpha(letter))
    {
        cout << "Error: '" <<letter << "'is not a letter! Please enter a character from A to Z. \n";
    }
    else
    {
        char lowerLetter = tolower(letter);

        switch(lowerLetter){
        case 'a':
        case 'e':
        case 'u':
        case 'o':
        case 'i':cout <<letter << " is a vowel. \n";break;
        default:cout<< letter<< " is a consonent or not a letter.\n"; break;
        }
    }
        return 0;
}