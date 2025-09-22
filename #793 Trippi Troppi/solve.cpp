#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, i;
    cin >> n;

    for (i = 0; i < n; i++)
    {
        string w1, w2, w3;
        cin >> w1 >> w2 >> w3;
        cout << w1[0] << w2[0] << w3[0] << '\n';
    }
    return 0;
}