/**
 * author: atef_ai
 * created: 1 Aug 17:10
**/
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
int main(void) {
  int t; std::cin >> t;
  while (t--) {
    std::string s, t; 
    std::cin >> s >> t;
    std::sort(s.begin(), s.end());
    if (t[0] != 'a' || s[0] != t[0]) std::cout << s << '\n';
    else {
      int itr, c = 0;
      for (itr = 0; s[itr] != '\0'; itr++) {
        if (s[itr] == t[1]) { ++c; continue; }
        if (s[itr] > 'c') break;
        std::cout << s[itr];
      }
      while (c--)
        std::cout << t[1];
      for (itr; s[itr] != '\0'; itr++)
        std::cout << s[itr];
      std::cout << '\n';
    }
  }
  return 0;
}