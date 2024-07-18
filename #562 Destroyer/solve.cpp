/*
  author: atef_ai
  date: 14 Jul 2024
  problem: Destroyer
*/
#include <iostream>
#include <vector>
#include <limits>
int main(void)
{
  int tests;
  std::cin >> tests;
  while (tests--)
  {
    int size;
    std::cin >> size;
    std::vector<int> arr(size, 0);
    for (int itr = 0; itr < size; itr++)
    {
      std::cin >> arr.at(itr);
    }
    std::vector<int> freqs(101, 0);
    for (int itr = 0; itr < size; itr++)
    {
      freqs.at(arr.at(itr))++;
    }
    int mx = std::numeric_limits<int>::min();
    bool p = true;
    for (int itr = 100; itr >= 0; itr--)
    {
      if (mx > freqs.at(itr))
      {
        std::cout << "NO\n";
        p = false;
        break;
      }
      mx = std::max(mx, freqs.at(itr));
    }
    if (p)
    {
      std::cout << "YES\n";
    }
  }
  return 0;
}
