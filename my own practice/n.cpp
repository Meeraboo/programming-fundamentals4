#include <iostream>
using namespace std;
main()
{
    string word;
    cout << "enter the word: ";
    cin >> word;
    for (int i = 0; word[i] != '\0'; i++)
    {
        word[i] = word[i] + 1;
    }
    cout << word;
}