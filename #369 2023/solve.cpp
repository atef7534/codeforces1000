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
  int size, k;
  std::cin >> size >> k;

  int product = 1, can = true;
  for (int itr = 0; itr < size; itr++)
  {
    int tmp;
    std::cin >> tmp;
    product *= tmp;
    if (product > 2023)
    {
      can = false;
      product = 1;
    }
  }

  if (!can)
    return void(std::cout << "NO\n");
  
  if (!(2023 % product))
  {
    std::cout << "YES\n";
    for (int itr = 0; itr < k - 1; itr++)
      std::cout << "1 ";
    std::cout << 2023 / product << '\n';
  }
  else
  {
    std::cout << "NO\n";
  }
  return;
}