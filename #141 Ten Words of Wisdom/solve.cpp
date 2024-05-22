#include <iostream>
#include <limits>

int main(void)
{
  int tt;
  std::cin >> tt;

  while (tt--)
  {
    int r, m = std::numeric_limits<int>::min(), ans = 1;
    std::cin >> r;
    for (int i = 1; i <= r; i++)
    {
      int ai, bi;
      std::cin >> ai >> bi;

      if (ai > 10) continue;
      if (m <= bi) {
        ans = i;
        m = bi;
      }
    }
    std::cout << ans << "\n";
  }
  return 0;
}