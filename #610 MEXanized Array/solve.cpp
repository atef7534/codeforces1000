/*
  author: atef_ai
  created: 19 Jul 2024
  problem: MEXanized Array
*/
#include <iostream>
#include <string>
int main(void)
{
  int t;
  std::cin >> t;
  while (t--)
  {
    int n, k, x;
    std::cin >> n >> k >> x;
    if (k > n || k - 1 > x)
    {
      std::cout << -1 << '\n';
      continue;
    }
    int lower = ((k - 1) * k) / 2;
    int mx = x;
    if (k == x)
    {
      mx--;
    }
    std::cout << std::max(0, (n - k)) * mx + lower << '\n';
  }
  return 0;
}