/**
 * author: atef_ai
 * created: 29 Jul 20:54
**/
#include <iostream>
#include <vector>
#include <algorithm>
bool palindrome(std::string str);
int main(void) {
  int t; std::cin >> t;
  while (t--) {
    int n; std::cin >> n;
    std::vector<std::string> a(2 * n - 2);
    for (int itr = 0; itr < 2 * n - 2; itr++)
      std::cin >> a.at(itr);
    std::sort(a.begin(), a.end(), [&](std::string s1, std::string s2) {
      return int(s1.size()) > int(s2.size());
    });
    /* solution */
    std::string xx = a.at(1).substr(1);
    std::string yy = a.at(0).substr(0, n - 2);
    std::string res = a.at(0) + a.at(1).back();
    if (!xx.compare(yy)) {
      res = a.at(1) + a.at(0).back();
    }
    std::cout << (palindrome(res) ? "YES\n" : "NO\n");
  }
  return 0;
}
bool palindrome(std::string str) {
  for (int l = 0, r = int(str.size()) - 1; l < r; l++, r--) {
    if (str[l] != str[r])
      return false;
  }
  return true;
}