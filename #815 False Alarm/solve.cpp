#include <iostream>
#include <string>
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
        int x, n;
        cin >> n >> x;

        bool chk = false;
        string result = "Yes\n";

        for (int i = 0; i < n; i++)
        {
            int d;
            cin >> d;

            if (d)
            {
                chk = true;
            }

            if (chk)
            {
                if (!x && d)
                {
                    result = "No\n";
                }
                else
                {
                    x = max(0, x - 1);
                }
            }
        }
        cout << result;
    }
    return 0;
}