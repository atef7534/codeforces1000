#include <iostream>
#include <vector>

using namespace std;

// Function to determine the winner of the game based on the rules
int countSuneetWins(int a1, int a2, int b1, int b2) {
    int suneetWins = 0;

    // All possible scenarios of flipping cards
    if ((a1 > b1 && a2 > b2) || (a1 > b2 && a2 > b1)) {
        suneetWins++;
    }
    if ((a1 > b1 && a2 == b2) || (a1 == b2 && a2 > b1)) {
        suneetWins++;
    }
    if ((a1 == b1 && a2 > b2) || (a1 > b2 && a2 == b1)) {
        suneetWins++;
    }

    return suneetWins;
}

int main() {
    int t;
    cin >> t;
    vector<int> results;

    for (int i = 0; i < t; i++) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;

        int wins = 0;

        // Check all 4 possible orders of flipping the cards
        if ((a1 > b1 && a2 > b2) || (a1 > b2 && a2 > b1)) {
            wins++;
        }
        if ((a1 > b1 && a2 < b2) || (a1 < b2 && a2 > b1)) {
            wins++;
        }
        if ((a1 < b1 && a2 > b2) || (a1 > b2 && a2 < b1)) {
            wins++;
        }
        if ((a1 < b1 && a2 < b2) || (a1 < b2 && a2 < b1)) {
            wins++;
        }

        results.push_back(wins);
    }

    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}
