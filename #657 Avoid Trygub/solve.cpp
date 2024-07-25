/**
 * author: atef_ai
 * created: 25 Jul
 */
#include <iostream>
#include <algorithm>
#include <vector>
int main(void)
{
  int t;
  std::cin >> t;
  while (t--) {
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    std::sort(s.begin(), s.end());
    std::cout << s << '\n';
  }
  return 0;
}
