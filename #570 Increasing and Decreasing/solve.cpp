/*
  author: atef_ai
  date: 15 Jul 2024
  problem: Increasing and Decreasing
*/
#include <iostream>
#include <vector>
#include <algorithm>
int main(void)
{
  int tests;
  std::cin >> tests;
  while (tests--)
  {
    int x, y, n;
    std::cin >> x >> y >> n;
    int r = ((n - 1) * n) / 2;
    if (y - x < r)
    {
      std::cout << "-1\n";
      continue;
    }
    std::vector<int> arr = {x, y};
    int last = y;
    for (int itr = 0; itr < n - 2; itr++)
    {
      last -= itr + 1;
      arr.push_back(last);
    }
    std::sort(arr.begin(), arr.end());
    for (int itr = 0; itr < (int)arr.size(); itr++)
    {
      std::cout << arr.at(itr) << ' ';
    }
    std::cout << '\n';
  }
  return 0;
}