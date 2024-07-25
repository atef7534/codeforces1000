/**
 * author: atef_ai
 * created: 24 Jul
 */
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
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
    //solution
    bool ok = false;
    for (int itr = 0; itr < n; itr++) {
      for (int itrj = 0; itrj < n; itrj++) {
        if (itr == itrj)
          continue;
        int t = std::__gcd(a.at(itr), a.at(itrj));
        ok |= (t <= 2);
      }
    }
    std::cout << (ok ? "YES\n" : "NO\n");
  }
  return 0;
}