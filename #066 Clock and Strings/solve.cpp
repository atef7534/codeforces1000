#include <iostream>

using namespace std;

int main(void)
{
    int tests; cin >> tests;
    while (tests--) 
    {
        int a, b, c, d; cin >> a >> b >> c >> d;

        if (a > b) 
        {
            int t = a;
            a = b;
            b = t;
        }

        if (c > d) 
        {
            int t = c;
            c = d;
            d = t;
        }

        if ((a > c && b < d) || (a < d && b < c) || (a < c && b > d) || (a > d)) 
        {
            cout << "NO\n";
        } 
        else 
        {
            cout << "YES\n";
        }
    }
    return 0;
}