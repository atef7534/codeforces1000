/*
  author: atef_ai
  date: 14 Jul 2024
  problem: Phoenix and Gold
*/
#include <iostream>
#include <vector>
#include <algorithm>
int getSum(std::vector<int>& arr, int size);
int main(void)
{
  int tests;
  std::cin >> tests;
  while (tests--)
  {
    int size, x;
    std::cin >> size >> x;
    std::vector<int> arr(size, 0);
    for (int itr = 0; itr < size; itr++)
    {
      std::cin >> arr.at(itr);
    }
    std::sort(arr.begin(), arr.end());
    if (x == arr.front() && arr.front() == arr.back() || getSum(arr, size) == x)
    {
      std::cout << "NO\n";
    }
    else
    {
      std::cout << "YES\n";
      int sum = 0;
      for (int itr = size - 1; itr >= 0; itr--)
      {
        if (sum + arr.at(itr) == x)
        {
          std::cout << arr.at(itr - 1) << ' ' << arr.at(itr) << ' ';
          sum += arr.at(itr) + arr.at(itr - 1);
          itr--; 
        }
        else
        {
          std::cout << arr.at(itr) << ' ';
          sum += arr.at(itr);
        }
      }
      std::cout << '\n';
    }
  }
  return 0;
}
int getSum(std::vector<int>& arr, int size)
{
  int sum = 0;
  for (int itr = 0; itr < size; itr++)
  {
    sum += arr.at(itr);
  }
  return sum;
}