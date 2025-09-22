#include <cctype>
#include <iostream>
#include <string>
using namespace std;

bool isAllUpper(string s);

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string word;
    cin >> word;

    if (isAllUpper(word))
    {
        int i;
        for (i = 0; word[i] != '\0'; i++)
        {
            char t = tolower(word[i]);
            cout << t;
        }
        cout << '\n';
        return 0;
    }

    if (islower(word[0]) && isAllUpper(word.substr(1)))
    {
        char f = toupper(word[0]);
        cout << f;
        int i;
        for (i = 1; word[i] != '\0'; i++)
        {
            char t = tolower(word[i]);
            cout << t;
        }
        cout << '\n';
        return 0;
    }

    cout << word << '\n';
    return 0;
}
bool isAllUpper(string s)
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (islower(s[i]))
        {
            return false;
        }
    }
    return true;
}