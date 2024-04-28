#include <iostream>
#include <map>
#include <string>

int main(void) {
    int goals; std::cin >> goals;

    std::map<std::string, int> count;
    int mn = 0;
    std::string answer;
    for (int i = 0; i < goals; i++) {
        std::string s; std::cin >> s;

        count[s]++;
        if (count[s] > mn) {
            mn = count[s];
            answer = s;
        }
    }

    std::cout << answer << "\n";
    return 0;
}
