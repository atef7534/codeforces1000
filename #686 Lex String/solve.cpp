/**
 * author: atef_ai
 * created: 29 Jul 17:26
**/
#include <algorithm>
#include <iostream>
#include <string>
int main(void) {
  int t; std::cin >> t;
  /* solution */
  while (t--) {
    int n, m, k;
    std::cin >> n >> m >> k;
    std::string s1(n, '\0'), s2(m, '\0'), s3 = "";
    std::cin >> s1 >> s2;
    std::sort(s1.begin(), s1.end(), [&](char c1, char c2) {
      return c1 > c2;
    });
    std::sort(s2.begin(), s2.end(), [&](char c1, char c2) {
      return c1 > c2;
    });
    int cnt = k, turn = (s1.back() > s2.back());
    while (!s1.empty() && !s2.empty()) {
      if (!cnt) { cnt = k; turn = !turn; }
      if (s1.back() < s2.back()) {
        if (!turn) {
          s3.push_back(s1.back());
          s1.pop_back();
          --cnt;
        } else {
          if (cnt != 0 && cnt != k) { s3.push_back(s1.back()); cnt = k - 1; s1.pop_back(); turn = 0; }
          else { s3.push_back(s2.back()); s2.pop_back(); cnt = k; turn = 0; }
        }
      } else {
        if (turn) {
          s3.push_back(s2.back());
          s2.pop_back();
          --cnt;
        } else {
          if (cnt != 0 && cnt != k) { s3.push_back(s2.back()); cnt = k - 1; s2.pop_back(); turn = 1; }
          else { s3.push_back(s1.back()); s1.pop_back(); turn = 1; cnt = k; }
        }
      }
    }
    std::cout << s3 << '\n';
  }
  return 0;
}
