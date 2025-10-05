#include <iostream>
#include <set>

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
        int n, i;
        cin >> n;

        set<int> st;
        for (i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            st.insert(x);
        }

        int ans = st.size();
        cout << ans * 2 - 1 << '\n';
    }
    return 0;
}