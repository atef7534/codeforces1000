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
        size_t n, i;
        cin >> n;

        vector<int> a(n);
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool res = true;
        for (i = 1; i < n; i++)
        {
            int tmp = abs(a[i] - a[i - 1]);
            res &= (tmp == 5 || tmp == 7);
        }
        cout << (res ? "Yes\n" : "No\n");
    }
    return 0;
}