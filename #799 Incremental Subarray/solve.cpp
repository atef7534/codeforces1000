#include <algorithm>
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
        size_t n, m, i, mx = 1;
        cin >> n >> m;

        vector<int> a(m);
        bool res = true;
        for (i = 0; i < m; i++)
        {
            cin >> a[i];

            if (i)
            {
                res &= (a[i] - 1 == a[i - 1]);
            }
            mx = max((int)mx, a[i]);
        }
        cout << (res ? n - mx + 1 : 1) << '\n';
    }
    return 0;
}