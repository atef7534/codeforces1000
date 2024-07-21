/*
  author: atef_ai
  created: 19 Jul 2024
  problem: Divide and Conquer
*/
#include <iostream>
#include <vector>
int main(void)
{
  int t;
  std::cin >> t;
  while (t--)
  {
    int size;
    std::cin >> size;
    std::vector<int> a(size);
    int s = 0;
    for (int itr = 0; itr < size; itr++)
    {
      std::cin >> a.at(itr);
      s += a.at(itr);
    }
    int ans = 51;
    if (s & 1)
    {
      for (int itr = 0; itr < size; itr++)
      {
        int tmp = a.at(itr), r = 0;
        while ((s - a.at(itr) + tmp) & 1)
        {
          tmp >>= 1;
          r++;
        }
        ans = std::min(ans, r);
      }
      std::cout << ans << '\n';
    }
    else
    {
      std::cout << 0 << '\n';
    }
  }
  return 0;
}