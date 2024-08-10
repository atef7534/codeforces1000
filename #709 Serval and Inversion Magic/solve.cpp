/**
 * author: atef_ai
 * created: 3 Aug 13:02
**/
#include <iostream>
#include <string>
int main(void) {
  int t;
  std::cin >> t;
  while (t--) {
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    bool ok = true;
    int itr = 0, m = 0;
    std::string r = "Yes\n";
    while (itr < n / 2) {
      if (s[itr] != s[n - itr - 1]) {
        if (!ok) {
          r = "No\n";
          break;
        }
        ++m;
      }
      if (m && s[itr] == s[n - itr - 1]) {
        ok = false;
      }
      ++itr;
    }
    std::cout << r;
  }
  return 0;
}