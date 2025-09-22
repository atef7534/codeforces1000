#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        char ch = '9';
        for (size_t i = 0; s[i] != '\0'; i++)
        {
            if (s[i] < ch)
            {
                ch = s[i];
            }
        }
        cout << ch << '\n';
    }
    return 0;
}