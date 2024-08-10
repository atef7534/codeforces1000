/**
 * author: atef_ai
 * created: 3 Aug 16:17
**/
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
int main(void) {
  int t;
  std::cin >> t;
  while (t--) {
    std::string s;
    std::cin >> s;
    std::vector<char> stack;
    int b = std::count(s.begin(), s.end(), 'B');
    bool ok = true;
    for (auto &chr: s) {
      if (chr == 'B') {
        if (stack.empty()) {ok = false; break;}
        if (!(b - 1)) stack.clear();
        else stack.pop_back();
        --b;
        continue;
      }
      stack.push_back(chr);
    }
    ok &= (stack.empty());
    std::cout << (ok ? "YES\n" : "NO\n");
  }
}