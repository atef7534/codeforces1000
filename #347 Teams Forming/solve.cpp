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
  int tests = 1;
  while (tests--)
    solve();
  return 0;
}

void solve()
{
  int size;
  std::cin >> size;

  std::vector<int> numbers(size, 0);
  for (int itr = 0; itr < size; itr++)
    std::cin >> numbers.at(itr);
  
  std::sort(numbers.begin(), numbers.end());

  int minimumProblems = 0;
  for (int itr = 1; itr < size; itr += 2)
    minimumProblems += (numbers.at(itr) - numbers.at(itr - 1));
  
  std::cout << minimumProblems << '\n';
  return;
}
