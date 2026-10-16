#include <iostream>
using namespace std;

int main(void) {
    // Speeding up our solution to make it use less time.
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // Getting variables values as inputs
    int price,
        m; 
    cin >> price >> m;

    int counter = 1;
    while (
        (price * counter) % 10 != m 
        && 
        (price * counter) % 10 != 0) {
        counter++;
    }
    
    cout << counter << "\n";
    return 0;
}