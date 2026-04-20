#include <iostream>
using namespace std;
main()
{
    string input;
    cout << "enter a string: ";
    getline(cin, input);
    string result = " ";
    for (int i = 0; i < input.length(); i++)
    {
        char ch = input[i];

        if (ch != 'a' &&ch != 'e' &&ch != 'i' && ch != 'o' && ch != 'u')
        {
            result += ch;
        }
    }
    cout << "string witgh vowels removed: " << result << endl;
    return 0;
}