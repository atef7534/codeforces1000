#include <iostream>
#include <math.h>
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
        int x, ans;
        cin >> x;

        ans = sqrt(x);
        if (ans * ans == x)
        {
            cout << "0 " << ans << '\n';
        }
        else
        {
            cout << "-1\n";
        }
    }
    return 0;
}