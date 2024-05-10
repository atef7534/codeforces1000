#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main(void) {
    int n; cin >> n;
    vector<int> v(n); 
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    double ans = 0.0;
    for (int i = 0; i < n; i++) {
        double t = v[i] / 100.0;
        ans += t;
    }

    cout << fixed;
    cout << setprecision(12) << 100 * ans / n << "\n";

    return 0;
}