#include <iostream>
#include <vector>
#include <algorithm>
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
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;
        vector<int> v;
        v.push_back(a2 + a1);
        v.push_back(a4 - a2);
        v.push_back(a5 - a4);
        sort(v.begin(), v.end());

        if (v[0] == v[2])
        {
            cout << "3\n";
        }
        else if (v[0] == v[1] || v[1] == v[2])
        {
            cout << "2\n";
        }
        else
        {
            cout << "1\n";
        }
    }
    return 0;
}