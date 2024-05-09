#include <iostream>
#include <vector>
using namespace std;

int next_year(int n);
bool can(int x);

int main(void) {
    int n; cin >> n;
    int next = next_year(n);

    cout << next << "\n";
    return 0;
}

int next_year(int n) {
    int x = n + 1;
    while (!can(x)) {
        x++;
    }

    return x;
}

bool can(int x) {
    vector<int> v(10, 0);
    while (x) {
        v[x % 10]++;
        if (v[x % 10] > 1) {
            return false;
        }
        x /= 10;
    }
    return true;
}