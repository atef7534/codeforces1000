/*
  author: atef_ai
  created: 18 Jul 2024
  problem: Sorting with Twos
*/
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
    std::vector<int> a(n, 0), f;
    for (int itr = 0; itr < n; itr++)
    {
      std::cin >> a.at(itr);
      if (itr)
      {
        if (a.at(itr) < a.at(itr - 1))
        {
          f.push_back(itr);
        }
      }
    }
    bool valid = true;
    for (int itr = 0, n = (int)f.size(); itr < n; itr++)
    {
      valid &= (!(f.at(itr) & (f.at(itr) - 1)));
    }
    std::cout << (valid ? "YES\n" : "NO\n");
  }
  return 0;
}