#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int g1 = 0, g2 = 0, g3 = 0, g4 = 0, n, i, ans = 0, k;
    cin >> n;

    for (i = 0; i < n; i++)
    {
        int si;
        cin >> si;
        g1 += (si == 1);
        g2 += (si == 2);
        g3 += (si == 3);
        g4 += (si == 4);
    }
    k = min(g3, g1);
    g3 -= k;
    g1 -= k;
    ans = g4 + g3 + g2 / 2 + k;
    g2 %= 2;
    if (g2)
    {
        if (g1 >= 2)
        {
            ans++;
            g1 -= 2;
        }
        else
        {
            ans++;
            g1 = 0;
        }
        g2 = 0;
    }
    if (g1)
    {
        ans += (g1 + 3) / 4;
    }
    cout << ans << '\n';
    return 0;
}