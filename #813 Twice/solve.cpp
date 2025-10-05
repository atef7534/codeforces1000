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
        vector<int> o(21, 0);
        size_t n;
        cin >> n;

        for (size_t i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            o[x]++;
        }

        int ans = 0;
        for (int i = 1; i <= 20; i++)
        {
            ans += o[i] / 2;
        }

        cout << ans << '\n';
    }
    return 0;
}