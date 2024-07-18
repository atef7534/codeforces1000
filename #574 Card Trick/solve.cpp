/*
  author: atef_ai
  created: 16 Jul 2024
  problem: Card Trick
*/
#include <iostream>
#include <vector>
int main(void)
{
  int tests;
  std::cin >> tests;
  while (tests--)
  {
    int n;
    std::cin >> n;
    std::vector<int> a(n, 0);
    for (int itr = 0; itr < n; itr++)
    {
      std::cin >> a.at(itr);
    }
    int m;
    long long total = 0;
    std::cin >> m;
    std::vector<int> b(m, 0);
    for (int itr = 0; itr < m; itr++)
    {
      std::cin >> b.at(itr);
      total += b.at(itr);
    }
    total %= m;
    std::cout << a.at(total) << '\n';
  }
  return 0;
}