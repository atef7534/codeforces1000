#include <iostream>

int main(void)
{
  int tt;
  std::cin >> tt;

  while (tt--)
  {
    int n;
    std::cin >> n;

    int even = 0, odd = 0;
    for (int i = 0; i < n; i++)
    {
      int x;
      std::cin >> x;

      even += (x & 1) ? 0 : x;
      odd += (x & 1) ? x : 0;
    }

    (even > odd) ? std::cout << "YES\n" : std::cout << "NO\n";
  }

  return 0;
}