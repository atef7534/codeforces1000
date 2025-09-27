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
        int n, a, b, c, ans, i;
        cin >> n >> a >> b >> c;

        ans = (n / (a + b + c)) * 3;
        int m = n % (a + b + c);
        ans += (m > 0);
        m = max(0, m - a);
        ans += (m > 0);
        m = max(0, m - b);
        ans += (m > 0);
        cout << ans << '\n';
    }
    return 0;
}