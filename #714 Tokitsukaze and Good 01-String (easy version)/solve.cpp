/**
 * author: atef_ai
 * created: 3 Aug 15:48
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
    int prev = 0, times = 0, res = 0;
    for (int itr = 0; itr < n; itr++) {
      if (s[itr] == s[prev]) { ++times; continue; }
      if (times & 1) { res++; itr++; prev = itr; }
      times = 1; prev = itr;
    }
    std::cout << res << '\n';
  }
  return 0;
}