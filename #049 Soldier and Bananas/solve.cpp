#include <iostream>
using namespace std;

int main(void) {
    int a, b, c; cin >> a >> b >> c;

    c = ((c) * (c + 1) / 2) * a;
    
    if (c - b < 0) {
        cout << "0\n";
    } else {
        cout << c - b << "\n";
    }
    return 0;
}