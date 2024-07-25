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
    std::vector<int> a(n, 0);
    for (auto &i: a) std::cin >> i;
    // solution
    int ans = 1;
    for (int itr = 0; itr < n; itr++) {
      if (itr + 1 < n) {
        if (!(a.at(itr) + a.at(itr + 1))) {
          ans = -1;
          break;
        }
      }
      if (itr) {
        if (a.at(itr) + a.at(itr - 1) == 2)
          ans += 5;
        else if (a.at(itr))
          ans++;
        continue;
      }
      ans += a.at(itr);
    }
    std::cout << ans << '\n';
  }
  return 0;
}
