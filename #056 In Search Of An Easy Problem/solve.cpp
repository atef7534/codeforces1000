#include <iostream>
using namespace std;

int main(void) {
    int people; cin >> people;
    string level = "EASY\n";

    while (people--) {
        int x; cin >> x;
        if (x == 1) {
            level = "HARD\n";
        }
    }
    cout << level << "\n";
    return 0;
}