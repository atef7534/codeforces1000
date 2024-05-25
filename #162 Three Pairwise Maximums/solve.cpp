#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
  int tt;
  std::cin >> tt;

  while (tt--)
  {
    int x, y, z;
    std::cin >> x >> y >> z;

    if (x > y && x > z || y > x && y > z || z > x && z > y)
      std::cout << "NO\n";
    else
    {
      std::cout << "YES\n";
      std::cout << std::min(x, std::min(y, z)) << " " << std::min(x, std::min(y, z)) << " " << std::max(x, std::max(y, z)) << "\n";
    }
  }
  return 0;
}