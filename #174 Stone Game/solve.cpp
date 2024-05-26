#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
  int tt;
  std::cin >> tt;

  while (tt--)
  {
    int n, mx = 0, mn = 0;
    std::cin >> n;

    std::vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
      std::cin >> a[i];
      if (a[i] > a[mx])
        mx = i;
      if (a[i] < a[mn])
        mn = i;
    }
    std::cout << std::min({
      std::max(mn, mx) + 1,
      n - std::min(mn, mx),
      n - mx + mn + 1,
      n - mn + mx + 1
    }) << "\n";
  }
  return 0;
}