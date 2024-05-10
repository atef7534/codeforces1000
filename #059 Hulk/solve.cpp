#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void) {
    vector<string> v{"I hate that", "I love that"};
    
    int limit; cin >> limit;
    for (int i = 0; i < limit; i++) {
        if (i == limit - 1) {
            if (i % 2 == 0) {
                cout << "I hate it\n";
            } else {
                cout << "I love it\n";
            }
        } else {
            cout << v[i % 2] << " ";
        }
    }

    return 0;
}