/**
 * author: atef_ai
 * created: 29 Jul 16:03
**/
#include <iostream>
int main(void) {
  int n;
  std::cin >> n;
  std::string s; std::cin >> s;
  /* solution */
  long long res = 0;
  for (int itr = 0; itr < n; itr++)
    res += (!(int(s[itr] - '0') & 1) ? itr + 1 : 0);
  std::cout << res << '\n';
  return 0;
}