/*
  author: atef_ai
  created: 20 Jul 2024
  problem: Typical Interview Problem
*/
#include <iostream>
#include <string>
int main(void) {
  int t;
  std::cin >> t;
  while (t--) {
    int n, ok = 0;
    std::cin >> n;
    std::string s, t = "FBFFBFFBFBFFBFFBFBFFBFFB";
    std::cin >> s;
    for (int itr = 0; itr < (int)t.size() - n + 1; itr++) {
      std::string tmp = t.substr(itr, n);
      ok |= (!(tmp.compare(s)));
    }
    std::cout << (ok ? "YES\n" : "NO\n");
  }
  return 0;
}