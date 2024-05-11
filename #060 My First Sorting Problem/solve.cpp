#include <iostream>

using namespace std;

int main(void) 
{
    int tests; cin >> tests;
    while (tests--)
    {
        int x, y; cin >> x >> y;
        if (x > y) {
            int t = x;
            x = y;
            y = t;
        }

        cout << x << " " << y << "\n";
    }

    return 0;
}