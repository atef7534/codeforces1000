/*
  author: atef_ai
  created: 17 Jul 2024
  problem: Showstopper
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
int main(void)
{
  int tests;
  std::cin >> tests;
  while (tests--)
  {
    int n;
    std::cin >> n;
    std::vector<int> a(n, 0), b(n, 0);
    for (int itr = 0; itr < n; itr++)
    {
      std::cin >> a.at(itr);
    }
    for (int itr = 0; itr < n; itr++)
    {
      std::cin >> b.at(itr);
    }
    for (int itr = 0; itr < n; itr++)
    {
      if (a.at(itr) > b.at(itr))
      {
        std::swap(a.at(itr), b.at(itr));
      }
    }
    int mx_one = *max_element(a.begin(), a.end());
    int mx_two = *max_element(b.begin(), b.end());
    if (mx_one != a.back() || mx_two != b.back())
    {
      std::cout << "NO\n";
    }
    else
    {
      std::cout << "YES\n";
    }
  }
  return 0;
}