#include <iostream>
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
        int m, a, b, c, ans;
        cin >> m >> a >> b >> c;

        ans = min(a, m) + min(b, m);
        m = 2 * m - ans;

        cout << min(m, c) + ans << '\n';
    }
    return 0;
}