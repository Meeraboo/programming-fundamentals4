#include <iostream>
using namespace std;
main()
{
    string word;
    char letter;
    bool found = false;
    cout << "Enter a word: ";
    cin >> word;
    cout << "Enter a letter to search: ";
    cin >> letter;
    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] == letter)
        {
            found = true;
            break;
        }
    }
    if (found)
    {
        cout << "Letter found in the word." << endl;
    }
    else
    {
        cout << "Letter not found in the word." << endl;
    }
}