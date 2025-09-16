#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // solution
    int  query,
         sum_x = 0,
         sum_y = 0,
         sum_z = 0;
    cin >> query;

    for (int i = 0; i < query; i++) {
        int coordinate_x,
            coordinate_y,
            coordinate_z;
        cin >> coordinate_x >> coordinate_y >> coordinate_z;
        sum_x += coordinate_x;
        sum_y += coordinate_y;
        sum_z += coordinate_z;
    }
    (!sum_x && !sum_y && !sum_z) ? cout << "YES\n" : cout << "NO\n";
    return 0;
}