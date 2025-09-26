#include <iostream>
#include <vector>
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
        vector<int> m(10, 0);
        m[0] = 3;
        m[1] = 1;
        m[2] = 2;
        m[3] = 1;
        m[5] = 1;
        int n, i, x, ans = 0;
        cin >> n;

        for (i = 0; i < n; i++)
        {
            cin >> x;
            if (m[x])
            {
                m[x]--;
                ans = i + 1;
            }
        }
        bool res = true;
        for (i = 0; i < 10; i++)
        {
            res &= (m[i] == 0);
        }
        cout << (res ? ans : 0) << '\n';
    }
    return 0;
}