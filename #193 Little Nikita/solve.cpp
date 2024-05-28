#include <algorithm>
#include <iostream>
#include <vector>

int main(void)
{
  int tt = 1;
  std::cin >> tt;

  while (tt--)
  {
    int n, m;
    std::cin >> n >> m;

    if (n < m)
      std::cout << "NO\n";
    else
    {
      if (!(n - m))
        std::cout << "YES\n";
      else
        std::cout << "NO\n";
    }
  } 
  return 0;
}