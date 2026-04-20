#include <iostream>
using namespace std;
main()
{
    string word;
    bool isfound = false;
    char letter;
    cout << "Enter the word: " << endl;
    cin >> word;
    cout << "enter the character u want to find: " << endl;
    cin >> letter;
    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] = letter)
        {
            isfound = true;
            break;
        }
    }
    if (isfound)
    {
        cout << letter << "is found in the " << word << endl;
    }
    else
    {
        cout << "not found " << endl;
    }
    return 0;
}