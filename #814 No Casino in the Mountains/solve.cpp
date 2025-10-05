#include <iostream>
#include <vector>
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
        int k;
        cin >> n >> k;

        vector<int> a(n);
        for (size_t i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int d = 0, tmp = 0;
        for (size_t i = 0; i < n; i++)
        {
            if (a[i])
            {
                tmp = 0;
                continue;
            }
            tmp++;
            if (tmp == k)
            {
                d++;
                tmp = 0;
                i++;
            }
        }
        cout << d << '\n';
    }
    return 0;
}