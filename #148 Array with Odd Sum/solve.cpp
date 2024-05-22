#include <iostream>

int main(void)
{
  int tt;
  std::cin >> tt;

  while (tt--)
  {
    int n, i, odd = 0;
    std::cin >> n;

    bool ok = false;

    for (i = 0; i < n; i++)
    {
      int x;
      std::cin >> x;
      odd += (x & 1);
    }

    (odd != n && odd > 0 || (odd == n && (n & 1))) ? std::cout << "YES\n" : std::cout << "NO\n";
  }

  return 0;
}