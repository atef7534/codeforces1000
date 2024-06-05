#include <iostream>

void solve();
int main(void)
{
  int t;
  std::cin >> t;
  while (t--)
    solve();
  return 0;
}

void solve()
{
  int n, k, x;
  std::cin >> n >> k >> x;
  if (x != 1)
  {
    std::cout << "YES\n" << n << "\n";
    for (int i = 0; i < n; i++)
      std::cout << "1 ";
    std::cout << "\n";
  }
  else
  {
    if (k == 1 || k == 2 && n & 1)
      return static_cast<void>(std::cout << "NO\n");
    if (n & 1)
    {
      std::cout << "YES\n" << 1 + n - 3 << "\n";
      std::cout << 3 << ' ';
      for (int i = 0; i < (n - 3) / 2; i++)
        std::cout << "2 ";
      std::cout << "\n"; 
    }
    else
    {
      std::cout << "YES\n" << n / 2 << "\n";
      for (int i = 0; i < n / 2; i++)
        std::cout << "2 ";
      std::cout << "\n";
    }
  }
  return;
}