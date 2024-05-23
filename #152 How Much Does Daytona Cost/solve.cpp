#include <algorithm>
#include <iostream>
#include <vector>

int main(void)
{
  int tt;
  std::cin >> tt;

  while (tt--)
  {
    int n, k, c = 0;
    std::cin >> n >> k;

    std::vector<int> f(101, 0);

    for (int i = 0; i < n; i++)
    {
      int x; std::cin >> x;
      f[x]++;
    }

    (f[k]) ? std::cout << "YES\n" : std::cout << "NO\n";
  }
  return 0;
}
