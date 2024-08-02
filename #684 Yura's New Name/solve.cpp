/**
 * author: atef_ai
 * created: 29 Jul 16:20
**/
#include <iostream>
#include <vector>
int main(void) {
  int t; std::cin >> t;
  /* solution */
  while (t--) {
    std::string s; std::cin >> s;
    std::vector<char> stack;
    int ans = 0, itr;
    for (itr = 0; s[itr] != '\0'; itr++) {
      char c = s[itr];
      if (stack.empty()) {
        if (c == '_') {
          ++ans;
        }
        stack.push_back(c);
      } else {
        ans += (stack.back() == '_' && c == '_');
        stack.push_back(c);
      }
    }
    ans += (!(itr - 1) || stack.back() == '_');
    std::cout << ans << '\n';
  }
  return 0;
}