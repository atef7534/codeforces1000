#include <iostream>
#include <vector>
#include <algorithm>

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
        int q, m, i, ans = 0;
        cin >> q >> m;

        vector<size_t> a(q);
        for (i = 0; i < q; i++)
        {
            string s;
            cin >> s;

            a[i] = s.size();
        }

        for (i = 0; i < q && m >= a[i]; i++)
        {
            ans++, m -= a[i];
        }
        cout << ans << '\n';
    }
    return 0;
}