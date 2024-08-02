/**
 * author: atef_ai
 * created: 29 Jul 17:14
**/
#include <iostream>
#include <vector>
bool sorted(std::vector<int>& a, int n);
int main(void) {
  int t; std::cin >> t;
  /* solution */
  while (t--) {
    int n; std::cin >> n;
    std::vector<int> a(n, 0);
    for (int itr = 0; itr < n; itr++)
      std::cin >> a.at(itr);
    int k = 0, cnt = 0;
    while (!sorted(a, n)) {
      for (int itr = 0 + k; itr + 1 < n; itr += 2) {
        if (a.at(itr) > a.at(itr + 1))
          std::swap(a.at(itr), a.at(itr + 1));
      }
      k = !k;
      ++cnt;
    }
    std::cout << cnt << '\n';
  }
  return 0;
}
bool sorted(std::vector<int>& a, int n) {
  for (int itr = 0; itr + 1 < n; itr++) {
    if (a.at(itr) != itr + 1) return false;
  }
  return true;
}