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
    for (int itr = 0; itr < n; itr++) {
      std::cin >> a.at(itr);
    }
    // solution
    int count = 0;
    for (int itr = 0; itr + 2 < n; itr++) {
      if (a.at(itr + 1) > a.at(itr) && a.at(itr + 1) > a.at(itr + 2)) {
        a.at(itr + 2) = a.at(itr + 1);
        if (itr + 3 < n) {
          a.at(itr + 2) = std::max(a.at(itr + 2), a.at(itr + 3));
        }
        else a.at(itr + 2) = a.at(itr + 1);
        ++count;
      }
    }
    std::cout << count << '\n';
    for (int itr = 0; itr < n; itr++)
      std::cout << a.at(itr) << ' ';
    std::cout << '\n';
  }
  return 0;
}