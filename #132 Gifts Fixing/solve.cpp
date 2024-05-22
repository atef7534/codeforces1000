#include <iostream>
#include <vector>
#include <limits>

int main(void)
{
  int tests;
  std::cin >> tests;

  while (tests--)
  {
    int size, mna = std::numeric_limits<int>::max(), mnb = std::numeric_limits<int>::max();
    std::cin >> size;

    std::vector<int> a(size), b(size);
    for (int i = 0; i < size; i++)
    {
      std::cin >> a[i];
      mna = std::min(mna, a[i]);
    }

    for (int i = 0; i < size; i++)
    {
      std::cin >> b[i];
      mnb = std::min(mnb, b[i]);
    }

    long long ans = 0;
    for (int i = 0; i < size; i++)
    {
      ans += std::max(a[i] - mna, b[i] - mnb);
    }

    std::cout << ans << "\n";
  }

  return 0;
}