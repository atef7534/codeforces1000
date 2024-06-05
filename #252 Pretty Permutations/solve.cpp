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
  int n, i;
  std::cin >> n;
  if (n == 2)
    return static_cast<void> (std::cout << "2 1\n");
  
  if (n & 1)
  {
    std::cout << "3 1 2 ";
    for (i = 5; i <= n; i += 2)
      std::cout << i << " " << i - 1 << " ";
  }
  else
  {
    std::cout << "2 1 ";
    for (i = 4; i <= n; i += 2)
      std::cout << i << " " << i - 1 << " ";
  }
  std::cout << "\n";

  return;
}