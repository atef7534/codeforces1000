#include <iostream>

using namespace std;

int main(void)
{
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    int c = 0;
    for (int i = 1; i <= d; i++)
    {
        if (!(i % l) || !(i % k) || !(i % m) || !(i % n)) {
            ++c;
        }
    }

    cout << c << "\n";

    return 0;
}