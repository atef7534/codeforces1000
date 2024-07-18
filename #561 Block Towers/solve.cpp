/*
  author: atef_ai
  date: 14 Jul 2024
  problem: Black Towers 
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
    int size;
    long long f1;
    std::cin >> size;
    std::vector<int> arr(size - 1, 0);
    std::cin >> f1;
    for (int itr = 0; itr < size - 1; itr++)
    {
      std::cin >> arr.at(itr);
    }
    std::sort(arr.begin(), arr.end());
    for (int itr = 0; itr < size - 1; itr++)
    {
      if (arr.at(itr) > f1)
      {
        f1 += (arr.at(itr) - f1 + 1) / 2;
      }
    }
    std::cout << f1 << '\n';
  }
  return 0;
}
