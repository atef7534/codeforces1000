/**
 * author: atef_ai
 * created: 2 Aug 14:55
**/
#include <iostream>
#include <algorithm>
int main(void) {
  int t; 
  std::cin >> t;
  while (t--) {
    int sz; 
    std::cin >> sz;
    std::string s; 
    std::cin >> s;
    long long c0 = 0, c1 = 0, r0 = 0, r1 = 0;
    for (int itr = 0; itr < sz; itr++) {
      int itrj = itr;
      long long c = 0;
      while (itrj < sz && s[itrj] == s[itr]) {
        c0 += (s[itr] == '0');
        c1 += (s[itr] == '1');
        c++, itrj++;
      }
      if (s[itr] == '0') r0 = std::max(r0, c);
      else r1 = std::max(r1, c);
      itr = itrj - 1;
    }
    std::cout << std::max({r1 * r1, r0 * r0, c0 * c1}) << '\n';
  }
  return 0;
}