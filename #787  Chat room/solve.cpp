#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    char hello[] = "hello";
    char word[101];

    cin >> word;

    int hello_length = strlen(hello);
    int word_length = strlen(word);

    int i = 0, j = 0;
    while (i < word_length && j < hello_length)
    {
        if (word[i] == hello[j])
        {
            j++;
        }
        i++;
    }

    if (j == hello_length)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}
