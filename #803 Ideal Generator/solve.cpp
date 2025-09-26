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
        int k;
        cin >> k;
        cout << (k & 1 ? "YES\n" : "NO\n");
    }
    return 0;
}