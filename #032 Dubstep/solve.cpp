#include <iostream>
#include <string>

int main(void) {
    std::string s, res = "", t = ""; std::cin >> s;
    s += "WUB";
    for (int i = 0, n = s.size(); i < n; i++) {
        std::string sub = s.substr(i, 3);
        if (sub == "WUB") {
            i += 2;
            if (t == "") {
                continue;
            }
            res += t + " ";
            t = "";
        } else {
            t += s[i];
        }
    }
    res += t + " ";
    std::cout << res << "\n";
    return 0;
}