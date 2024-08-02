/**
 * author: atef_ai
 * created: 29 Jul 13:35
**/
#include <iostream>
#include <vector>
#include <algorithm>
int main(void) {
  int t; std::cin >> t;
  while (t--) {
    int n; std::cin >> n;
    std::string s1, s2;
    std::cin >> s1 >> s2;
    /* solution */
    int r = 0, b = 0;
    for (int itr = 0; itr < n; itr++) {
      if (s1[itr] == s2[itr]) continue;
      if (s1[itr] > s2[itr]) ++r;
      else ++b;
    }
    if (r == b) std::cout << "EQUAL\n";
    else if (r > b) std::cout << "RED\n";
    else std::cout << "BLUE\n";
  }
  return 0;
}