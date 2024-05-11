#include <iostream>

using namespace std;

int main(void)
{
    int tests; cin >> tests;
    while (tests--) {
        int a, b; cin >> a >> b;
        if (!(a % b)) {
            cout << "0\n";
            continue;
        }
        cout << b - (a % b) << "\n";
    }
}