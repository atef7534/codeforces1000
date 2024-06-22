#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <set>
#include <string>
#include <vector>


void solve();

int main(void)
{
  int tests;
  std::cin >> tests;
  while (tests--)
    solve();
  return 0;
}

void solve()
{
  int size;
  std::cin >> size;

  std::vector<int> oddNums, evenNums;
  for (int itr = 0; itr < size; itr++)
  {
    int tmp;
    std::cin >> tmp;
    if (tmp & 1)
      oddNums.push_back(tmp);
    else
      evenNums.push_back(tmp);
  }

  while (!oddNums.empty())
  {
    std::cout << oddNums.back() << ' ';
    oddNums.pop_back();
  }

  while (!evenNums.empty())
  {
    std::cout << evenNums.back() << ' ';
    evenNums.pop_back();
  }
  
  std::cout << '\n';
  return;
}
