#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        size_t n;
        cin >> n;

        string s;
        cin >> s;

        int c = 0;
        for (size_t i = 0; i < n; i++)
        {
            c += (s[i] == '1');
        }

        cout << (c + 1) * (n - c) + (c - 1) * c << '\n';
    }
    return 0;
}