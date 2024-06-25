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

  if (size == 3)
    return void(std::cout << "-1\n");
  
  std::cout << size << ' ' << size - 1 << ' ';
  for (int itr = 1; itr < size - 1; itr++)
    std::cout << itr << ' ';
  std::cout << '\n';
  return;
}