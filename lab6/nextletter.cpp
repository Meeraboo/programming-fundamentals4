#include <iostream>
using namespace std;
main()
{
    char word[100];
    cout << "Enter the word: ";
    cin >> word;
    for (int i = 0; word[i] != '\0'; i++)
    {
        word[i] = word[i] + 1;
    }
    cout << word;
}