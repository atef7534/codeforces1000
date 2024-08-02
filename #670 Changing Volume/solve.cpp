/**
 * author: atef_ai
 * created: 28 Jul 11:00
**/
#include <iostream>
int main(void) {
  int t;
  std::cin >> t;
  while (t--) {
    int a, b;
    std::cin >> a >> b;
    int rest = abs(a - b);
    int ans = rest / 5;
    if (rest % 5) {
      ans += (rest % 5 == 3 || rest % 5 == 4) ? 2 : 1;
      ans -= (!(rest % 5));
    }
    std::cout << ans << '\n';
  }
  return 0;
}