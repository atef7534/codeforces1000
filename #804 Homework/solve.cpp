#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m, i;
        cin >> n;

        string a, b, c;
        cin >> a;

        cin >> m >> b >> c;

        for (i = 0; i < m; i++)
        {
            if (c[i] == 'V')
            {
                a = b[i] + a;
            }
            else
            {
                a = a + b[i];
            }
        }
        cout << a << '\n';
    }
    return 0;
}