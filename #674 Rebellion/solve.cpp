/**
 * author: atef_ai
 * created: 28 Jul 18:34
**/
#include <iostream>
#include <vector>
int main(void) {
  int t;
  std::cin >> t;
  while (t--) {
    int n; std::cin >> n;
    std::vector<int> a(n, 0);
    for (int itr = 0; itr < n; itr++)
      std::cin >> a.at(itr);
    /* solution */
    int res = 0, left = 0;
    for (int itr = n - 1; itr > left; itr--) {
      while (left < itr && !a.at(left)) {
        left++;
      }
      if (a.at(itr) < a.at(left)) {
        left++;
        res++;
      }
    }
    std::cout << res << '\n';
  }
  return 0;
}