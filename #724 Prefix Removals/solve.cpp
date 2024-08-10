/**
 * author: atef_ai
 * created: 6 Aug 16:36
**/
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <limits>
int main(void) {
  int t; 
  std::cin >> t;
  while (t--) {
    std::string s;
    std::cin >> s;
    std::vector<int> a(26, 0);
    for (auto &c: s) a.at(c - 'a')++;
    int itr = 0;
    for (itr; s[itr] != '\0' && a.at(s[itr] - 'a') > 1; itr++) {
      a.at(s[itr] - 'a')--;
    }
    std::cout << s.substr(itr) << '\n';
  }
  return 0;
}
