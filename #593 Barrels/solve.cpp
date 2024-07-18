/*
  author: atef_ai
  created: 18 Jul 2024
  problem: Barrels
*/
#include <iostream>
#include <vector>
#include <algorithm>
int main(void)
{
  int t;
  std::cin >> t;
  while (t--)
  {
    int n, k;
    std::cin >> n >> k;
    std::vector<int> a(n, 0);
    for (int itr = 0; itr < n; itr++)
    {
      std::cin >> a.at(itr);
    }
    std::sort(a.begin(), a.end());
    long long sum = 0;
    for (int itr = n - k - 1; itr < n; itr++)
    {
      sum += a.at(itr);
      a.at(itr) = 0;
    }
    std::sort(a.begin(), a.end());
    std::cout << sum - a.at(0) << '\n';
  }
  return 0;
}