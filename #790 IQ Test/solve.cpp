#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, i, e = 0, o = 0, le, lo;
    cin >> n;

    vector<int> a(n);
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] & 1)
        {
            lo = i + 1;
            o++;
        }
        else
        {
            le = i + 1;
            e++;
        }
    }

    if (!(o - 1))
    {
        cout << lo << '\n';
    }
    else
    {
        cout << le << '\n';
    }
    return 0;
}