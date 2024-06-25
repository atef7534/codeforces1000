#include <algorithm>
#include <iostream>
#include <vector>

void solve();


int main()
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

  std::cout << size;
  for (int itr = 1; itr < size; itr++)
    std::cout << " " << itr;
  std::cout << '\n';
  return;
}