/*
  author: atef_ai
  created: 17 Jul 2024
  problem: Madoka and Strange Thoughts
*/
#include <algorithm>
#include <iostream>
#include <vector>
int main(void)
{
  int t;
  std::cin >> t;
  while (t--)
  {
    int n;
    std::cin >> n;
    std::vector<int> a = {0, 1, 4, 7, 10, 11};
    std::cout << (n / 6) * 16 + a.at(n % 6) << '\n';
  }
  return 0;
}
