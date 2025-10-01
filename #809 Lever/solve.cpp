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
        int n, i, mn = 0;
        cin >> n;

        vector<int> a(n), b(n);
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (i = 0; i < n; i++)
        {
            cin >> b[i];
            mn += (a[i] >= b[i]) ? a[i] - b[i] : 0;
        }
        cout << mn + 1 << '\n';
    }
    return 0;
}