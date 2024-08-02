/**
 * author: atef_ai
 * created: 29 Jul 14:24
**/
#include <iostream>
#include <vector>
#include <algorithm>
int main(void) {
  int n;
  std::cin >> n;
  std::string s;
  std::cin >> s;
  /* solution */
  int e = std::count(s.begin(), s.end(), '8');
  std::cout << std::min(e, n / 11) << '\n';
  return 0;
}