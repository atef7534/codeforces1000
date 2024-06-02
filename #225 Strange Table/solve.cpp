#include <iostream>

typedef long long longlong;

int main(void)
{
  int t;
  std::cin >> t;

  while (t--)
  {
    longlong n, m, x;
    std::cin >> n >> m >> x;

    x--;
    longlong col = x / n;
    longlong row = x % n;
    
    std::cout << row * m + col + 1 << "\n";
  }
  return 0;
}