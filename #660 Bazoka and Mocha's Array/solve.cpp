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
    // solution
    std::vector<int> a(n, 0);
    for (int itr = 0; itr < n; itr++)
      std::cin >> a.at(itr);
    std::vector<int> b;
    int last = a.front();
    while (!a.empty() && last >= a.back()) {
      b.push_back(a.back());
      last = a.back();
      a.pop_back();
    }
    std::reverse(b.begin(), b.end());
    for (auto &i: a)
      b.push_back(i);
    bool ok = true;
    for (int itr = 0; itr + 1 < n; itr++)
      ok &= (b.at(itr) <= b.at(itr + 1));
    std::cout << (ok ? "Yes\n" : "No\n");
  }
  return 0;
}