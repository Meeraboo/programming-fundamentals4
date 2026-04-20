#include <iostream>
using namespace std;
main()
{
    string word;
    char letter;
    bool isfound = false;
    cout << " Enter word: " << endl;
    cin >> word;
    cout << "Enter the letter: " << endl;
    cin >> letter;
    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] = letter)
        {
            isfound = true;
            break;
        }
    }
    if (isfound = true)
    {
        cout << " " << letter << " is found in " << word << endl;
    }
    else
    {
        cout << "not found" << endl;
    }
}