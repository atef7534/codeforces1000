#include <iostream>
#include <limits>             
#include <vector>

int main(void)
{
  int tests;
  std::cin >> tests;

  while (tests--)
  {
    int n;
    std::cin >> n;

    std::vector<int> v(n);

    int l = std::numeric_limits<int>::min(), c = 0;
    for (int i = 0; i < n; i++)
    {
      std::cin >> v[i];
      c += (!v[i]) ? 1 : -1 * c;
      l = std::max(l, c);
    }
    std::cout << l << "\n";
  }
  return 0;
}