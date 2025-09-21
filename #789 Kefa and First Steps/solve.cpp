#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<int> a(n);
    int i, sol = 1, tmp = 1;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        if (!i)
        {
            continue;
        }
        if (a[i] >= a[i - 1])
        {
            tmp++;
        }
        else
        {
            sol = max(sol, tmp);
            tmp = 1;
        }
    }
    cout << max(tmp, sol) << '\n';
    return 0;
}