#include <iostream>
#include <vector>

bool zeroLeft(const std::vector<int>& cnt, int size);

int main(void)
{
  int tests;
  std::cin >> tests;

  while (tests--)
  {
    int sz;
    std::cin >> sz;

    std::vector<int> nums(sz, 0);
    int mxE = 0;
    for (int itr = 0; itr < sz; itr++)
    {
      std::cin >> nums.at(itr);
      mxE = std::max(mxE, nums.at(itr));
    }

    std::vector<int> cnt(mxE + 1, 0);
    for (int itr = 0; itr < sz; itr++)
    {
      int num = nums.at(itr);
      cnt.at(num)++;
    }

    while (zeroLeft(cnt, mxE + 1))
    {
      for (int itr = 0; itr < mxE + 1; itr++)
      {
        if (cnt.at(itr))
        {
          std::cout << itr << ' ';
          cnt.at(itr)--;
        }
      }
    }
    std::cout << '\n';
  }
  return 0;
}

bool zeroLeft(const std::vector<int>& cnt, int size)
{
  bool found = false;
  for (int itr = 0; itr < size; itr++)
  {
    found |= (cnt.at(itr) > 0);
  }
  return found;
}