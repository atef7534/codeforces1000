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
        int n, s, i, p = -1;
        cin >> n >> s;

        vector<int> a(n);
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        /*
            2 2
            1 3
        */
        sort(a.begin(), a.end());
        if (a[0] >= s)
        {
            cout << a[n - 1] - s << '\n';
        }
        else if (s >= a[n - 1])
        {
            cout << s - a[0] << '\n';
        }
        else
        {
            cout << min(a[n - 1] - s + a[n - 1] - a[0], s - a[0] + a[n - 1] - a[0]) << '\n';
        }
    }
    return 0;
}