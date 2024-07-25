/**
 * author: atef_ai
 * created: 23 Jul
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
    for (int itr = 0; itr < n; itr++) 
      std::cin >> a.at(itr);
    // solution
    int cnt = 0;
    for (int itr = 0; itr + 1 < n; itr++) {
      if (a.at(itr) > a.at(itr + 1)) {
        cnt++, itr++;
      }
    }
    std::cout << cnt << '\n';
  }
  return 0;
}