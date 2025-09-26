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
        int n, k, p;
        cin >> n >> k >> p;

        if ((abs(k) + p - 1) / p > n)
        {
            cout << "-1\n";
        }
        else
        {
            cout << ((abs(k) + p - 1) / p) << '\n';
        }
    }
    return 0;
}