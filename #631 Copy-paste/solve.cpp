/*
 * author: atef_ai
 * created: Jul 23
*/
#include <iostream>
#include <vector>
#include <algorithm>
int main(void) {
  int t;
  std::cin >> t;
  while (t--) {
    int n, k;
    std::cin >> n >> k;
    std::vector<int> a(n, 0);
    for (int itr = 0; itr < n; itr++) {
      std::cin >> a.at(itr);
    }
    // solution
    std::sort(a.begin(), a.end());
    int r = 0;
    for (int itr = 1; itr < n; itr++) {
      r += (k - a[itr]) / a[0];
    }
    std::cout << r << '\n';
  }
}